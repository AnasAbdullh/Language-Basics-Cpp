#include <iostream>
#include <cmath>
using namespace std;

int rectangleArea(int Number1, int Number2)
{
    short Area = Number1 * Number2;
    return Area;
}

int main()

{
    short Num1, Num2;

    cout << "ENter NUmber\n";
    cin >> Num1;

    cout << "Enter Number2\n";
    cin >> Num2;

    cout << rectangleArea(Num1, Num2) << endl;

    return 0;
}