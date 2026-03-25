// P62- PRINT
//_ _ _ *
//_ _ * *
//_ * * *
//* * * *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // ROWS
    {
        for (int j = 1; j <= n - i; j++) // SPACES
        {
            cout << "_ ";
        }
        for (int j = 1; j <= i; j++) // STARS
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// 62.1 SIMILARLY PRINT
//_ _ _ 1
//_ _ 1 2
//_ 1 2 3
// 1 2 3 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // ROWS
    {
        for (int j = 1; j <= n - i; j++) // SPACES
        {
            cout << "_ ";
        }
        for (int j = 1; j <= i; j++) // STARS
        {
            cout << j;
        }
        cout << endl;
    }
}

// 62.3 SIMILARLY PRINT
//_ _ _ A
//_ _ A B
//_ A B C
// A B C D

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // ROWS
    {
        for (int j = 1; j <= n - i; j++) // SPACES
        {
            cout << "_ ";
        }
        for (int j = 1; j <= i; j++) // STARS
        {
            cout << char(j + 65);
        }
        cout << endl;
    }
}

// NOW 62.3) STAR RHOMBUS
// PRINT
//_ _ _ * * * *
//_ _ * * * * _
//_ * * * * _ _
//* * * * _ _ _
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // ROWS
    {
        for (int j = 1; j <= n - i; j++) // SPACES
        {
            cout << "_ ";
        }
        for (int j = 1; j <= i; j++) // STARS
        {
            cout << "* ";
        }
        for (int j = 1; j <= n - i; j++) // STARS
        {
            cout << "* ";
        }
        for (int j = 1; j <= i - 1; j++) // SPACES
        {
            cout << "_ ";
        }
        cout << endl;
    }
}

// BETTER METHOD
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // ROWS
    {
        for (int j = 1; j <= n - i; j++) // spaces
        {
            cout << "_";
        }
        for (int j = 1; j <= n; j++) // STARS (4 stars in every i is printed)
        {
            cout << "*";
        }
        cout << endl;
    }
}
