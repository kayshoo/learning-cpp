#include <iostream>
using namespace std;
int main()
{
    // print even numbers from 1 to 100.
    // for (int i = 2; i <= 100; i += 2)
    // {
    //     cout << i << " ";
    // }
    //             OR
    // for (int i = 2; i <= 100; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    // Print 4,7,10,13,16, .. .. .nth term
    // nth term = a+(n-1)d => nth term= 4+(n-1)3 == 3n+1.
    // int n;
    // cin >> n;
    // for (int i = 4; i <= (3 * n + 1); i += 3)
    // {
    //     cout << i << " ";
    // }
    // Print whether 3 inputs from  the user can be the sides of a triangle or not.
    // float a, b, c;
    // cin >> a >> b >> c;
    // if ((a + b) > c && (a + c) > b && (b + c) > a)
    // {
    //     cout << "Yes they can form a triangle";
    // }
    // else
    // {
    //     cout << "No they can not form a triangle";
    // }
    //                           NESTED IF ELSE
    // largest of 3 numbers
    // float a, b, c;
    // cin >> a >> b >> c;
    // if a>b then if 1. a>c -> a is greatest. 2. c>a -> c is greatest.
    // else if b>a then if 1.b>c -> b is greatest 2.b<c -> c is greatest.
    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         cout << "a is greatest";
    //     }
    //     else
    //         cout << "c is greatest";
    // }
    // else
    // {
    //     if (b > c)
    //     {
    //         cout << "b is greatest";
    //     }
    //     else
    //     {
    //         cout << "c is greatest";
    //     }
    // }
    //
    // Take input percentage of a student and print the grade
    //>80% -> Very good.
    //>70% -> Good.
    //>60% -> Fair.
    //>40% -> Need Improvement.
    //<40% -> Fail.
    // float percentage;
    // cin >> percentage;
    // if (percentage < 0 || percentage > 100)
    // {
    //     cout << "Input percentage is invalid";
    // }
    // else if (percentage >= 80)
    // {
    //     cout << "Very good";
    // }
    // else if (percentage >= 70)
    // {
    //     cout << "Good";
    // }
    // else if (percentage >= 60)
    // {
    //     cout << "Fair";
    // }
    // else if (percentage >= 40)
    // {
    //     cout << "Need improvement";
    // }
    // else
    // {
    //     cout << "Fail";
    // }
    //
    //                     TERNARY OPERATOR
    // Find a number is even or odd using ternary operator.
    // Syntax: condition ? if true:if false;
    // int a;
    // cin >> a;
    // (a % 2 == 0) ? cout << "Even" : cout << "Odd";
    //
    //
    // Print numbers 1 to 100 backwards:
    // for (int i = 100; i >= 1; i--)
    // {
    //     cout << i << " ";
    // }
    //
    // Print factors of n.
    // Factors of 50 : 25, 10, 5, 2. #That means 50 is divisible by these nubmers.
    // Logic: divide 50 by i. keep i increasing or decreaing to 50/2 (We know that max factor of a digit maybe the half of it, no more than it whether it is prime or composite in all cases)
    // so either for(int i=1;i<=n/2;i++) {
    // if (n%i==0){
    // cout<<i<<" ";  }}
    // OR for(int i=n/2;i>1;i--) and same           #the int i=n/2 works for both even or odd numbers since it is an integer division not float. and the value being stored will
    // be an integer. so like if i =51 -> 51/2 becomes 25
    //
    // Prime vs composite number
    // Prime number is a number that has exactly two factors : 1 and itself.
    // Composite number is a number that has more than 2 factors, that is factos  apart from 1 and itself.
    // To check we can do this:
    // A number n is prime is only 1 and n are its factors -> if (n%i!=0) in i=2 to n-1. then prime.
    // A number n is composite if n%i==0 in i=2 to n-1 even once. (use break if it happens to lower the work time of the code)
    // print 1,2,4,6,8.... n terms
    // int n;
    // cin >> n;
    // cout << "1,";
    // for (int i = 1; i <= n - 1; i++)
    // {
    //     cout << 2 * i << ",";
    // }
    //
    // INFINITE LOOP EXAMPLE.
    // int i = 10;
    // while (i = 20)
    //     cout << "A computer buff!" << endl;
    int x = 4, y = 0;
    while (x >= 0)
    {
        x--;
        y++;
        if (x == y)
            continue;
        else
            cout << x << " " << y << endl;
    }
}
