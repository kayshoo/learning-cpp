// Q. Take 3 inputs and print the largest of the three numbers.
// So for solving this we simple must compare the three numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        cout << a << " is the largest number";
    }
    else if (b >= a && b >= c)
    {
        cout << b << " is the largest number";
    }
    else
    {
        cout << c << " is the largest number";
    }
}

// Similarly we can solve for the smalles of three numbers by just changing the condition to a<=b and a<=c and so on.
// NESTED IF ELSE FOR LARGEST OF THREE NUMBERS:
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greates";
        }
        else
        {
            cout << "c is greates";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "b is greates";
        }
        else
        {
            cout << "c is greates";
        }
    }
}