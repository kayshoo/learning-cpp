// REVERSE OF A NUMBER:
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int loc = 0;
    while (n != 0)
    {
        int ld = n % 10;
        n = n / 10;
        loc = (loc * 10) + ld;
    }
    cout << loc;
    // NOW TO PRINT THE SUM OF A NUMBER AND ITS REVERSE, ALONG WITH REVERSE ITSELF AND SUM OF ITS DIGITS.
    // int n;
    // cin >> n;
    // int b = n;
    // int rev = 0;
    // int sum = 0;
    // while (n != 0)
    // {
    //     int ld = n % 10;
    //     n = n / 10;
    //     sum += ld;
    //     rev = (rev * 10) + ld;
    // }
    // cout << "sum is:" << sum << " and rev is: " << rev << endl;
    // cout << "Also the sum of the number and its reverse will be: " << b + rev;
}