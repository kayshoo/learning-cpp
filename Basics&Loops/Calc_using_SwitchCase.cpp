#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    char ch;
    cout << "Enter a character among ";
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    }
}

// WE CAN ALSO ADD inside case '/': {if (b!=0){ cout<<a/b;} else cout<<"Not possible";}}
