#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n == 1)
        cout << "Neither prime nor composite";
    else if (flag == true)
        cout << "Number is prime";
    else
        cout << "Number is composite";
}
// also 1 is neither prime nor composite so we can add this line before loop or even after:
// if (n<=1){ cout<<"Neither prime nor composite"; }