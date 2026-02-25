#include <iostream>
using namespace std;
int main()
{
    float P;
    float R;
    float T;
    float SI;
    cout << "Enter the Principal amount: ";
    cin >> P;
    cout << "Enter the Rate of Interest: ";
    cin >> R;
    cout << "Enter the Time in years: ";
    cin >> T;
    SI = (P * R * T) / 100;
    cout << "The Simple Interest is: " << SI << endl;
}
