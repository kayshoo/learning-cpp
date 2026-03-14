// Q. Program to write 1,2,4,8,16..... to nth term.
// Solution. in this GP we simply must multiple the term with 2 as loop proceeds. Last term will be 2^n.  there fore total terms wil be n-1. Since for n=0 value is 1, for n=1 value is 2 and so on.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * 2;
    }
}