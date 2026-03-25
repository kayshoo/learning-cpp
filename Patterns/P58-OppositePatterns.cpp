// #include <iostream>
// using namespace std;
// int main()
// {
//     // REVERSE STAR PATTERN
//     //****
//     //***
//     //**
//     //*
//     // Idea i=1; j=1234
//     // i=2; j=123
//     // i=3; j=12
//     // i=1; j=1
//     // I.e. i+jmax = 5 always (i.e. n+1 if n is the input from the user which is 4 here)
//     // hence jmax = n+1-i;
//     // so the code becomes;
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n + 1 - i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// SIMILARLY WE CANT PRINT:
// 1234
// 123
// 12
// 1          //cout<<j;
// OR
// 1111
// 222
// 33
// 4           //cout<<i;
// OR
// AAAA
// BBB
// CC
// D          //cout<<char(i+64)
// OR
// ABCDE
// ABCD
// ABC
// AB
// A            //cout<<char(j+64)

// ABOVE Code using while loop
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
        while (j <= n + 1 - i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

// PRINT THE MENTIONED:
// 4
// 43
// 432
// 4321
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= n + 1 - i; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

// P59 is in my register in which i printed this:
// Odd no. triangle
// 1
// 13
// 135
// 1357