// Print a Simple STAR TRIANGLE.
#include <iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++) // Only difference is j<=i IMP*
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// Using While loop
// {
//     int i = 1;
//     while (i <= 4)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// SIMILARLY WE CAN PRINT THESE:
//  1          1
//  12         22
//  123        333
//  1234       4444
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) // Only difference is j<=i IMP*
        {
            cout << j; // cout<<i;
        }
        cout << endl;
    }
}