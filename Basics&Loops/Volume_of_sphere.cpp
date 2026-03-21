#include <iostream>
using namespace std;
int main()
{
    float radius, volume;
    cout << "Enter radius of the sphere:";
    cin >> radius;
    volume = 3.14 * (4.0 / 3.0) * radius * radius * radius;
    cout << "volume of the sphere is:" << volume;
    return 0;
}