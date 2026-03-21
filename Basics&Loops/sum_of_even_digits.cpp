#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        // int ld = n % 10;
        // n = n / 10;
        // if (ld % 2 != 0)
        // {
        //     continue;
        // }
        // sum += ld;
        // WITHOUT USING continue;
        int ld = n % 10;
        if (ld % 2 == 0)
        {
            sum += ld;
        }
        n = n / 10;
    }
    cout << "Sum of even digits = " << sum;
    // Using for loop
    // int n;
    // cin>>n;
    // int sum=0;
    // for (; n!=0;n=n/10)
    //  {
    //      int ld=n%10;
    //      if(ld%2==0){
    //          sum+=ld;
    //      }
    //  }
    //  cout<<sum;
}

// SIMILARY YOU CAN SOLVE FOR ODD DIGITS OR A DIGIT DIVISBILE BY 3 or anything like that.