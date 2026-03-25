// PRINT This pattern;
// A
// AB
// ABC
// ABCD
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(j + 64);
        }
        cout << endl;
    }
}

// Another way.
// {
//     for (int i = 65; i <= 68; i++)
//     {
//         for (int j = 65; j <= i; j++)
//         {
//             cout << char(j);
//         }
//         cout << endl;
//     }
// }
//
// Using While loop:
// {
//     int i = 1;
//     while (i <= 4)
//     {
//         int j = 1;
//         while (j <= i)
//         {
//             cout << char(j + 64);
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// WE CAN ALSO TAKE INPUT FROM USER like if we want to print as per the user req.
// just put i<=n and j<=i.
// But note that after Z, other characters than Z will take place in the desired output.