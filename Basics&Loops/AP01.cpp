// Q. Display this AP -> 1,3,5,7,8,... upto n terms.
// For AP the formula for the nth term is -> nth term=a+(n-1)d
// So here a=1, d=2. Therefore nth term=2(n-1)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a = 2 * n - 1;
//     for (int i = 1; i <= a; i += 2)
//     {
//         cout << i << " ";
//     }
// }

// NOW THIS ONE: 4,7,10,13,16...nth times
// HERE nth term = a=4+(n-1)3 i.e. a=3n+1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a = 3 * n + 1;
//     for (int i = 4; i <= a; i += 3)
//     {
//         cout << i << " ";
//     }
// }

// ANOTHER METHOD:
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a += 3;
    }
}