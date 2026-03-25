// Print the below pattern
// 1
// AB
// 123
// ABCD
// 12345

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << char(j + 64);
            }
            else
            {
                cout << j;
            }
        }
        cout << endl;
    }
}
// We can also interchange the values to print
// A
// 12
// ABC ... and so on
// i.e.
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if (i % 2 == 0)
//             {
//                 cout <<j ;
//             }
//             else
//             {
//                 cout << char(j + 64);
//             }
//         }
//         cout << endl;
//     }
// }