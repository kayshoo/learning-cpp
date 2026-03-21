// PRINT A SQUARE USING STARS, TAKING INPUT FROM THE USER.
#include <iostream>
using namespace std;
int main()
// {
//     //USING for loop. the normal way. or below this code is mentioned how we will do the same using WHILE loop.
//     int s;
//     cout << "Enter the side length of the square{will be represented in stars}:";
//     cin >> s;
//     for (int i = 1; i <= s; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
{
    // USING WHILE LOOP?
    int s;
    cout << "Enter the side length that will be represented in stars:";
    cin >> s;
    int i = 1;
    while (i <= s)
    {
        int j = 1; // This must be written here, or j wont be reused if i wrote it before while(i<=s)...**IMP. I made a mistake here.
        while (j <= s)
        {
            cout << "*";
            j++;
        }
        cout << "\n"; // or cout<<endl; //Im just trying other stuff. Dont get confused.
        i++;
    }
}