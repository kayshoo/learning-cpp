// Q.Print Hello World 10 times.
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << "Hello world" << endl;
//     }
// }

// Q. Print hello world n times.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Hello world ";
        if (i == 1)
            cout << i << "st time" << endl;
        else if (i == 2)
            cout << i << "nd time" << endl;
        else if (i == 3)
            cout << i << "rd time" << endl;
        else
            cout << i << "th time" << endl;
    }
}

// If you want to print hello and world in different lines, just do this
//  for(.....){
//  cout<<"Hello"<<endl;
//  cout<<"world"<<endl;
//  }