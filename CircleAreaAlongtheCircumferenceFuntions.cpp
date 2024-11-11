#include <iostream>
#include <cmath>
using namespace std;

void InputUser(float &Number)
{
    cout << "Enter along Area\n";
    cin >> Number;
}

float AreaAlong(float &Area)
{
    float result = (pow(Area, 2) / (4 * M_PI));
    return result;
}

int main()

{
    float number;
    float Arealong;

    InputUser(number);
    Arealong = AreaAlong(number);
    cout << Arealong << endl;

    return 0;
}