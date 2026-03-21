
// Q. Given a point (x,y), Write a program to determine it's quadrant or whether if it lies on x-axis or y-axis.
// Solution. So simple check is x and y are +ve,-ve or 0.
#include <iostream>
using namespace std;
int main()
{
    // Take input from user
    float x, y;
    cout << "Enter value of x coordinate: " << endl;
    cin >> x;
    cout << "Enter y coordinate: " << endl;
    cin >> y;
    if (x > 0)
    {
        if (y > 0)
        {
            cout << "Point lies in 1st Quad";
        }
        else if (y < 0)
        {
            cout << "Point lies in 4th Quad";
        }
        else
            cout << "Point lies on x axis";
    }
    else if (x < 0)
    {
        if (y > 0)
        {
            cout << "Point lies in 2nd Quad";
        }
        else if (y < 0)
        {
            cout << "point lies in 3rd quad.";
        }
        else
        {
            cout << "point lies on y axis";
        }
    }
    else // this means x=0
    {
        if (y == 0) /// I ENTERED y=0 WHICH WAS ACTUALLY NOT GIVING ME THE DESIRED OUTPUT.
        {
            cout << "Point is the origin of the graph";
        }
        else
        {
            cout << "point lies on x-axis";
        }
    }
}