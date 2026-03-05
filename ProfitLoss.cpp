#include <iostream>
using namespace std;
int main()
{
    int cp, sp;
    cin >> cp >> sp;
    if (cp > sp)
    {
        cout << "Loss: " << cp - sp;
    }
    else if (cp < sp)
    {
        cout << "Profit: " << sp - cp;
    }
    else
    {
        cout << "No Profit No Loss";
    }
}