// P52- PRINT this pattern:
// 1234
// 1234
// 1234
// 1234
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// Using while loop
#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 4)
    {
        int j = 1;
        while (j <= 4)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}

// P54- PRINT THIS PATTERN:
// if n=3:
//  111
//  222
//  333
//  if n=5
//  11111
//  22222
//  33333
//  44444
//  55555

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
            cout << i;
        }
        cout << endl;
    }
}

// FROM ROUGH
//  USING While loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}

// int n;
// cin >> n;
// for (int i = 1; i <= n; i++)
// {
//     char ch = '0' + i;
//     for (int j = 1; j <= n; j++)
//     {
//         cout << ch;
//     }
//     cout << endl;
// }
// THE ABOVE METHOD WASN'T EVEN NECESSSARY BROOO....
// YOU CAN SIMPLE DO THIS:
// int n;
// cin >> n;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= n; j++)
//     {
//         cout << i;
//     }
//     cout << endl;
// }
