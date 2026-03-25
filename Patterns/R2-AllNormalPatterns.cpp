#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(j + 64);
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << n - j + 1;
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(n - j + 65);
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 4; j >= n + 1 - i; j--)
        {
            cout << char(n + 65 - i);
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 4; j >= n + 1 - i; j--)
        {
            cout << n + 1 - i;
        }
        cout << endl;
    }
}