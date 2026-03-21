// Print * a number of times in number of rows as per the user input.
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// REMEMBER In loops like this we used "i" twice for the first "for" loop and the second "for" that is inside the first one.
// Here it works but it is not recommended to use the same character like i multiple times in the same loop system.
// We could have used j which is a better way and clean and good habit to use.
// for (int i=1;i<=m;i++){
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }