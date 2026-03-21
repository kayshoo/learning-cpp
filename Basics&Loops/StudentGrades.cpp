// Q. Take input percentage of a student and print the grade according to the following criteria:
//  Percentage >= 90% : Very good
//  Percentage >= 80% and < 90% : Good
//  Percentage >= 60% and < 80% : Fair
//  Percentage >= 40% and < 60% : Poor
//  Percentage < 40% : Fail
#include <iostream>
using namespace std;
int main()
{
    int grade;
    cin >> grade;
    if (grade > 100 || grade < 0)
    {
        cout << "WHAT THE FUCK" << endl;
    }
    else if (grade >= 90 && grade <= 100)
    {
        cout << "VERY GOOD" << endl;
    }
    else if (grade >= 80)
    {
        cout << "GOOD" << endl;
    }
    else if (grade >= 60)
    {
        cout << "Fair" << endl;
    }
    else if (grade >= 40)
    {
        cout << "poor" << endl;
    }
    else
    {
        cout << "faa";
    }
}