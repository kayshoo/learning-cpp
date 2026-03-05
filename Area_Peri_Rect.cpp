#include <iostream>
using namespace std;
int main()
{
    float length, breadth, area, perimeter;
    cin >> length >> breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    cout << "Area is: " << area << endl;
    cout << "Perimeter is: " << perimeter << endl;
    if (area > perimeter)
    {
        cout << "Area is greater than Perimeter";
    }
    else if (area < perimeter)
    {
        cout << "Perimeter is greater than Area";
    }
    else
    {
        cout << "Area and Perimeter are equal";
    }
}