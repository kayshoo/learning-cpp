// Q.Take + ve int input and tell if it is a 3 digit number.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a > 99 && a < 1000)
    {
        cout << "The number is a three digit number";
    }
    else
    {
        cout << "Not a three digit number";
    }
}