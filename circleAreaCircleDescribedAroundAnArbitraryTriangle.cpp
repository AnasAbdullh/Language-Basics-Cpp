#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    float CircleArea;
    float Circledescribed;
    float arbitraryTriangle;

    cout << "Enter Circle Area\n";
    cin >> CircleArea;

    cout << "Enter Circle described\n";
    cin >> Circledescribed;

    cout << "Enter arbitrary Triangle\n";
    cin >> arbitraryTriangle;

    const float PI = M_PI;

    float base = (CircleArea + Circledescribed + arbitraryTriangle) / 2;
    float Area = (CircleArea * Circledescribed * arbitraryTriangle) / (4 * sqrt(base * (base - CircleArea) * (base - Circledescribed) * (base - arbitraryTriangle)));

    Area = pow(Area, 2);
    float power = Area * PI;

    cout << power << endl;
    cout << round(power) << endl;

    return 0;
}