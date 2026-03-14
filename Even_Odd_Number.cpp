#include <iostream>
using namespace std;
int mian()
{
    int x;
    cout << "Enter a number you want to check if it is even or odd: ";
    cin >> x;
    if (x % 2 == 0)
    {
        cout << x << "Is an even number.";
    }
    else
    {
        cout << x << "Is an odd number.";
    }
}

// USING TERNARY OPERATOR
// SYNTAX OF TERNARY OPERATOR IS (WITHOUT USING IF ELSE: (condition)? if true:if false; )
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int a;
//      cin >> a;
//      (a % 2 == 0) ? cout << "even" : cout << "odd";
//      return 0;
//  }
