// This program will print the mod or the absolute value of a number.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        cout << -n;
    }
}
// To put the absoulute value of n in the same number, just put n= -n; in the else block.