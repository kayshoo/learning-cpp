// Print the below mentioned
// 1
// 01
// 101
// 0101

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1;
            }
            else
                cout << 0;
        }
        cout << endl;
    }
}

// print the below mentioned :
// STAR PLUS
//     *
//     *
//* * * * *
//     *
//     *

// Remember for it to be symmetrical n should be an odd number input.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == ((n / 2) + 1) || j == ((n / 2) + 1))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}

// SIMILARLY WE CAN PRINT :
// ##*##
// ##*##
// *****
// ##*##
// ##*##

// NOW PRINT HOLLOW RECTANGLE
//******
//*    *
//*    *
//******

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n + 2); j++)
        {
            if (i == 1 || i == n || j == 1 || j == (n + 2))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}

// NOW PRINT STAR CROSS
// *   *
//  * *
//   *
//  * *
// *   *

// CONDITION : i==j || i+j==n+1.(n is odd like 5 or 7 for it to be symmetrical)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || (i + j) == (n + 1))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}