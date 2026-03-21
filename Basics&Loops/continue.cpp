// Print numbers 1 to 20 except 3 and 8.
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 20; i++)
//     {
//         if (i == 3 || i == 8)
//             continue;
//         cout << i << " ";
//     }
// }
// PRINT odd numbers from 1 to 100.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
            continue;
        cout << i << " ";
    }
}