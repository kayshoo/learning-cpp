// Q.Print even nubmers from 1 to 100 only.
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }

// BETTER METHOD:
#include <iostream>
using namespace std;
int main()
{
    for (int i = 2; i <= 100; i += 2)
    {
        cout << i << " ";
    }
}

// SIMILARLY FOR ODD NUMBERS
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 != 0)
//         {
//             cout << i << " ";
//         }
//     }
// }