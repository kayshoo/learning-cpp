//PRINT THE TABLE OF A NUMBER:
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number whose table you want to print: ";
    cin >> a;
    for (int i = 1; i <= 10; i++)
    {
        cout << a << "*" << i << "=" << a * i << endl;
    }
}