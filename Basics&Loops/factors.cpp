#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // LARGEST FACTOR ONLY (METHOD 1: FORWARD LOOP)
    // int n;
    // cin >> n;
    // int factor = 1;
    // for (int i = 1; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         factor = i;
    //     }
    // }
    // cout << "Largest factor of the number is: " << factor;
    //(METHOD 2: BACKWARD LOOP)
    int n;
    cin >> n;
    for (int i = n - 1; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << "Largest factor = :" << i;
            break;
        }
    }
}
