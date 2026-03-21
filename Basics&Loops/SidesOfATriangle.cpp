// Q.Take 3 inputs from the user and determine if they can be the sides of a triangle or not.
// So for three values to be sides of a traingle they must satisfy the condition that sum of any two sides must be greater than the third side.
// Suppose we take three sides a,b and c then we must have a+b>c and b+c>a and c+a>b.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        cout << "The three sides can be the sides of a triangle";
    }
    else
    {
        cout << "The three sides cannot be the sides of a triangle";
    }
}