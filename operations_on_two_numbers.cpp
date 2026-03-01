// Other operations like sum of two numbers i.e. multiplication, division, substraction, modulus etc. can also be performed in the same was as addition.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter two numbers:";
    cin >> a >> b;
    if (a == 0 || b == 0)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    else
    {
        cout << "Sum:" << a + b << endl;
        cout << "Difference:" << a - b << endl;
        cout << "Product:" << a * b << endl;
        cout << "Quotient:" << a / b << endl;
        cout << "Remainder:" << int(a) % int(b) << endl;
        cout << "Average:" << (a + b) / 2 << endl;
        cout << "maximum:" << max(a, b) << endl;
        cout << "minimum:" << min(a, b) << endl;
        cout << "Power:" << pow(a, b) << endl;
        cout << "Square root of a:" << sqrt(a) << endl;
        cout << "Square root of b:" << sqrt(b) << endl;
        cout << "Absolute value of a:" << abs(a) << endl;
        cout << "Absolute value of b:" << abs(b) << endl;
        cout << "Ceiling of a:" << ceil(a) << endl;
        cout << "Ceiling of b:" << ceil(b) << endl;
        cout << "Floor of a:" << floor(a) << endl;
        cout << "Floor of b:" << floor(b) << endl;
        cout << "Round of a:" << round(a) << endl;
        cout << "Round of b:" << round(b) << endl;
        cout << "Truncate of a:" << trunc(a) << endl;
        cout << "Truncate of b:" << trunc(b) << endl;
        cout << "Logarithm of a:" << log(a) << endl;
        cout << "Logarithm of b:" << log(b) << endl;
        cout << "Exponential of a:" << exp(a) << endl;
        cout << "Exponential of b:" << exp(b) << endl;
        cout << "Sine of a:" << sin(a) << endl;
        cout << "Sine of b:" << sin(b) << endl;
        cout << "Cosine of a:" << cos(a) << endl;
        cout << "Cosine of b:" << cos(b) << endl;
        cout << "Tangent of a:" << tan(a) << endl;
        cout << "Tangent of b:" << tan(b) << endl;
        cout << "Hyperbolic sine of a:" << sinh(a) << endl;
        cout << "Hyperbolic sine of b:" << sinh(b) << endl;
    }
}