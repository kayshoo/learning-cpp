
// To find the ASCII value of a character we can use the followinf code:

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character:";
    cin >> ch;
    cout << "The ASCII value of " << ch << " is :" << (int)ch;
}
// for reverse conversion of ASCII value to character we can use the following code:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >> x;
//     char ch = (char)x;
//     cout << ch;
// }