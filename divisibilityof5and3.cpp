// Q. Take an uint input and tell if it is divisible by 5 and 3 or both.
// so we mean to check  if a%5 and a%3 are 0 or not
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 5 == 0 && a % 3 == 0)
    {
        cout << "The number is divisible by both 5 and 3";
    }
    else if (a % 5 == 0 && a % 3 != 0)
    {
        cout << "The number is divisible by 5 but not by 3";
    }
    else if (a % 5 != 0 && a % 3 == 0)
    {
        cout << "The number is divisible by 3 but not by 5";
    }
    else
    {
        cout << "The number is not divisible by both 5 and 3";
    }
}