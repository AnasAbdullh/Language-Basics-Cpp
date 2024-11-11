#include <iostream>
#include <cmath>
using namespace std;

void AskUserDiameter(short &Diameter)
{

    cout << "Enter Area Through Diameter\n";
    cin >> Diameter;
}
float CaluclateDiameter(float dismeter)
{
    float Area = (M_PI * pow(dismeter, 2)) / 4;
    return Area;
}

int main()

{
    short CircleArea;
    AskUserDiameter(CircleArea);
    float diameter = CaluclateDiameter(static_cast<float>(CircleArea));
    cout << diameter << endl;

    return 0;
}