#include <iostream>
using namespace std;
int main()
{
    // USING WHILE LOOP
    //  int count = 0;
    //  int n;
    //  cin >> n;
    //  while (n > 0)
    //  { // or n!=0
    //      n = n / 10;
    //      count++;
    //  }
    //  cout << count;
    // USING FOR LOOP
    int n, count = 0;
    cin >> n;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        for (; n > 0; n = n / 10)
        {
            count++;
        }
    }
    cout << "The number of digits in the number is: " << count;
    return 0;
}