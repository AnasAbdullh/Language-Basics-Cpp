#include <iostream>
#include <cmath>
using namespace std;

void readUserInput(short &Circle)
{
    cout << "Enter Circle Area\n";
    cin >> Circle;
}
float CircleArea(float circle)
{
    float Area = M_PI * pow(circle, 2);
    return Area;
}

int main()

{
    short circle;
    readUserInput(circle);
    float Circlearea = CircleArea(circle);

    cout << Circlearea << endl;

    return 0;
}