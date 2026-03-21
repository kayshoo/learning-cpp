// Print the mentioned pattern:
// ABCD
// ABCD
// ABCD
// ABCD
#include <iostream>
using namespace std;
int main()
{
    for (int j = 1; j <= 4; j++)
    {
        for (int i = 65; i <= 68; i++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

// 53.1) Suppose we want to print like this:
// for n=4: Print
// AAAA
// BBBB
// CCCC
// DDDD
// Similary for n=5
// AAAAA
// BBBBB and so on....

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 65; i <= 64 + n; i++) // 64+n because if user wrote 1 - it will run the loop twice instead of 1.
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char(i);
        }
        cout << endl;
    }
}

//*****IMP
// We could have also simply done this:
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
            cout << char(i + 64); // or cout<<char(j+64);
        }
        cout << endl;
    }
}