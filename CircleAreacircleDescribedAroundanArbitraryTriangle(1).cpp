#include <iostream>
#include <cmath>
using namespace std;

float Circle_Area_circle_Described_Around_an_Arbitrary_Triangle(short area, short Described, short calculate)
{
    float P = (area + Described + calculate) / 2;
    float Area = (area * Described * calculate) / (4 * sqrt(P * (P - area) * (P - Described) * (P - calculate)));
    Area = pow(Area, 2);
    float result = M_PI * Area;
    return result;
}

int main()

{
    short Num1, Num2, Num3;
    cout << "Enter area\n ";
    cin >> Num1;
    cout << "Enter Described\n";
    cin >> Num2;
    cout << "Enter circle\n";
    cin >> Num3;

    float result = Circle_Area_circle_Described_Around_an_Arbitrary_Triangle(Num1, Num2, Num3);
    cout << result << endl;

    return 0;
}