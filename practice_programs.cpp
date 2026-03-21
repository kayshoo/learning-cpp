// PROGRAM 1
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      cout << "Hello World";
//      return 0;
//  }
// PROGRAM 2
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      string name;
//      cout << "enter your name";
//      cin >> name;
//      cout << "your name is: " << name;
//      return 0;
//  }
// PROGRAM 3
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "hello world" << endl
//          << "Welcome to c++ programming" << endl;
//     cout << "This might be a abit \nconfusing for you but \nwhy worry" << endl;
// }
// PROGRAM 4
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x; // Take a value of x from the user //LETS SAY 5
//     cout << x << endl; // Print the current value of x // Print 5
//     cout << x++ << endl; // Still print the current value of x, and then increase it by one. // Sill prints 5 but the value is 6 now
//     cout << x << endl; // Will print 6 now
//     cout << ++x << endl; // Now will increase the value of x from 6 to 7 and then print it. Will print 7.
//     cout << x << endl; // 7
//     cout << x-- << endl; // Prints 7, but now the x becomes 6.
//     cout << x << endl; // 6
//     cout << --x << endl; // Will make value of x from 6 to 5 and print 5.
// }
// PROGRAM 5
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a;
//     b = a % 2;
//     if (a % 2 == 0)
//     {
//         cout << a << " is an even number";
//     }
//     else
//     {
//         cout << a << " is an odd nubmer";
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     if (a % 2 == 0) cout << a << " is an even number" << endl;
//     if (a % 2 != 0)
//         cout << a << " is an odd number" << endl;
// }
// PROGRAM 6
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     if (a % 5 == 0)
//     {
//         cout << a << "is divisible by 5";
//     }
//     else
//     {
//         cout
//             << a << "Is not divisible by 5";
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     if (a > 0)
//     {
//         cout << "The absolute value of a is:" << a;
//     }
//     else
//     {
//         cout << "The absolute value of a is:" << -a;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     float cp, sp;
//     cin >> cp >> sp;
//     if (sp > cp)
//     {
//         cout << "PROFIT of: " << sp - cp;
//     }
//     else
//     {
//         cout << "LOSS of: " << cp - sp;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if (n > 99 and n < 1000)
//     {
//         cout << "The number is a three digit number";
//     }
//     else
//     {
//         cout << "The number is not a three digit number";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     if (a % 5 == 0 && a % 3 == 0)
//     {
//         cout << "The number is divisible by both 5 and 3";
//     }
//     else if (a % 5 == 0 && a % 3 != 0)
//     {
//         cout << "The number is divisible by 5 but not by 3";
//     }
//     else if (a % 5 != 0 && a % 3 == 0)
//     {
//         cout << "The number is divisible by 3 but not by 5";
//     }
//     else
//     {
//         cout << "The number is not divisible by both 5 and 3";
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     if ((a % 5 == 0 || a % 3 == 0) && a % 15 != 0)
//     {
//         cout << "The number is divisible by 5 or 3 but not 15";
//     }
//     else if (a % 15 == 0)
//     {
//         cout << "This number is divisible by 15 and hence by both 5 and 3 also";
//     }
//     else
//     {
//         cout << "The number is not divisible by 5 or 3 or 15";
//     }
// // }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 10, y = 20;
//     if (x == y)
//     {
//         cout << x << " " << y;
//     }
// }
// //NO OUTPUT

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 3, y = 5;
//     if (x == 3)
//         printf("\n%d", x);
//     else
//         ;
//     printf("\n%d", y);
// }
// OUTPUT WILL BE
// 3
// 5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x = 3, y, z;
//     y = x = 10;
//     z = x < 10;
//     cout << x << " " << y << " " << z;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i % 2 == 0)
//             cout << i << endl;
//     }
// }/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 4; i <= 3 * n + 1; i += 3)
//     {
//         cout << i << ",";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int n;
//     // cin >> n;
//     // int a = 1;
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     cout << a << ",";
//     //     a = a * 2;
//     // }
//     int n;
//     cin >> n;
//     for (int i = 1; i <= 2 ^ n - 1; i *= 2)
//     {
//         cout << i ;
//     }
// }

// REVISION
// Q. Length and breadth are given, compare its area and perimeter.
// #include <iostream>
// using namespace std;
// int main()
// {
//     float l, b;
//     cin >> l >> b;
//     float area = l * b;
//     float perimeter = 2 * (l + b);
//     if (area > perimeter)
//     {
//         cout << "Area is greater" << endl;
//     }
//     else if (area < perimeter)
//     {
//         cout << "Perimeter is greater" << endl;
//     }
//     else
//     {
//         cout << "Equal" << endl;
//     }
// }

// Q.Take +ve int input and tell if it is a 3 digit number.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     if (a > 99 && a < 1000)
//     {
//         cout << "The number is a three digit number";
//     }
//     else
//     {
//         cout << "Not a three digit number";
//     }
// }

// Q. Take an uint input and tell if it is divisible by 5 and 3 or both.
// so we mean to check  if a%5 and a%3 are 0 or not
//  #include <iostream>
//  using namespace std;
//  int main(){
//      int a;
//      cin>>a;
//      if(a%5==0 && a%3==0){
//          cout<<"The number is divisible by both 5 and 3";
//      }
//      else if(a%5==0 && a%3!=0){
//          cout<<"The number is divisible by 5 but not by 3";
//      }
//      else if(a%5!=0 && a%3==0){
//          cout<<"The number is divisible by 3 but not by 5";
//      }
//      else{
//          cout<<"The number is not divisible by both 5 and 3";
//      }
//  }

// Q.Take 3 inputs from the user and determine if they can be the sides of a triangle or not.
// So for three values to be sides of a traingle they must satisfy the condition that sum of any two sides must be greater than the third side.
// Suppose we take three sides a,b and c then we must have a+b>c and b+c>a and c+a>b.
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int a, b, c;
//      cin >> a >> b >> c;
//      if (a + b > c && b + c > a && c + a > b)
//      {
//          cout << "The three sides can be the sides of a triangle";
//      }
//      else
//      {
//          cout << "The three sides cannot be the sides of a triangle";
//      }
//  }

// Q. Take 3 inputs and print the largest of the three numbers.
// So for solving this we simple must compare the three numbers.
//  #include <iostream>
//  using namespace std;
//  int main(){
//      int a, b, c;
//      cin>>a>>b>>c;
//      if(a>=b && a>=c){
//          cout<<a<<" is the largest number";
//      }
//      else if(b>=a && b>=c){
//          cout<<b<<" is the largest number";
//      }
//      else{
//          cout<<c<<" is the largest number";
//      }}

// NESTED IF ELSE FOR LARGEST OF THREE NUMBERS:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a > b)
//     {
//         if (a > c)
//         {
//             cout << "a is greates";
//         }
//         else
//         {
//             cout << "c is greates";
//         }
//     }
//     else
//     {
//         if (b > c)
//         {
//             cout << "b is greates";
//         }
//         else
//         {
//             cout << "c is greates";
//         }
//     }
// }

// Q. Take input percentage of a student and print the grade according to the following criteria:
//  Percentage >= 90% : Very good
//  Percentage >= 80% and < 90% : Good
//  Percentage >= 60% and < 80% : Fair
//  Percentage >= 40% and < 60% : Poor
//  Percentage < 40% : Fail
// #include <iostream>
// using namespace std;
// int main()
// {
//     int grade;
//     cin >> grade;
//     if (grade > 100 || grade < 0)
//     {
//         cout << "WHAT THE FUCK" << endl;
//     }
//     else if (grade >= 90 && grade <= 100)
//     {
//         cout << "VERY GOOD" << endl;
//     }
//     else if (grade >= 80)
//     {
//         cout << "GOOD" << endl;
//     }
//     else if (grade >= 60)
//     {
//         cout << "Fair" << endl;
//     }
//     else if (grade >= 40)
//     {
//         cout << "poor" << endl;
//     }
//     else
//     {
//         cout << "faa";
//     }
// }

// // Q. Given a point (x,y), Write a program to determine it's quadrant or whether if it lies on x-axis or y-axis.
// // Solution. So simple check is x and y are +ve,-ve or 0.
// #include <iostream>
// using namespace std;
// int main()
// {
//     // Take input from user
//     float x, y;
//     cout << "Enter value of x coordinate: " << endl;
//     cin >> x;
//     cout << "Enter y coordinate: " << endl;
//     cin >> y;
//     if (x > 0)
//     {
//         if (y > 0)
//         {
//             cout << "Point lies in 1st Quad";
//         }
//         else if (y < 0)
//         {
//             cout << "Point lies in 4th Quad";
//         }
//         else
//             cout << "Point lies on x axis";
//     }
//     else if (x < 0)
//     {
//         if (y > 0)
//         {
//             cout << "Point lies in 2nd Quad";
//         }
//         else if (y < 0)
//         {
//             cout << "point lies in 3rd quad.";
//         }
//         else
//         {
//             cout << "point lies on y axis";
//         }
//     }
//     else // this means x=0
//     {
//         if (y == 0) /// I ENTERED y=0 WHICH WAS ACTUALLY NOT GIVING ME THE DESIRED OUTPUT.
//         {
//             cout << "Point is the origin of the graph";
//         }
//         else
//         {
//             cout << "point lies on x-axis";
//         }
//     }
// }

// // TERNARY OPERATOR
// // SYNTAX condition ? if true:if false;
// //(n%2==0)?cout<<"even":cout<<"odd";

// // Q. Find a number is even or odd using ternary operator
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cin >> a;
//     (a % 2 == 0) ? cout << "even" : cout << "odd";
//     return 0;
// }

// LOOPS
// for LOOP
// // Q.Print Hello World 10 times
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << "Hello world" << endl;
//     }
// }

// Q. Print numbers 1 to 100.
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 100; i++)
//     {
//         cout << i << " ";
//     }
// }

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

// Q. Pritn 100 to 1 (i.e backwards
// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 100; i >= 1; i--)
//     {
//         cout << i << " ";
//     }
// }

// Q. Now print factors of n number backwards.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = n / 2; i >= 1; i--)
//     {
//         if (n % i == 0)
//             cout << i << " ";
//     }
// }

// Q. NOW PRINT ONLY THE LARGEST FACTOR OF THE NUMBER.
// WE WILL GO BACKWARDS. i.e from n to 1. n is the number whose factor we have to find.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number whose factor you want to find: ";
//     cin >> n;
//     for (int i = n / 2; i >= 1; i--)
//     {
//         if (n % i == 0)
//         {
//             cout << i << endl;
//             break;
//         }
//     }
// }

// Q. Find whether n is composite or not.
// COMPOSITE NUMBER: A number that is divisible by a number other than itself and 1. is k/a composite number. Other wise it is a PRIME NUMBER.
// We have 2 methods: i) i from 2 to n. (Full loop)
//                    ii) i fron 2 to n/2. (n/2 because ofcoure there wont be any factors from n/2 to n-1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a nubmer to check whether it is a composite number or not: ";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is a composite number";
            break;
        }
        else
        {
            cout << "not";
            break;
        }
    }
}

#include <iostream>
using namespace std;
int main()
{
    int a == 10;
cout:
}