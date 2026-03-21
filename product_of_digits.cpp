#include <iostream>
using namespace std;
int main()
{
    int n;
    int prod = 1;
    cin >> n;
    while (n != 0)
    {
        //     int ld = n % 10;
        //     n = n / 10;
        //     prod *= ld;
        // }
        // cout << prod;
        // //now if we wamt to exclude 0, if present in the number and print the prod of other non zero digits.
        int ld = n % 10;
        n = n / 10;
        if (ld == 0)
        {
            continue;
        }
        prod *= ld;
    }
    cout << prod;
    return 0;
}