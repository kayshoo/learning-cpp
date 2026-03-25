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
