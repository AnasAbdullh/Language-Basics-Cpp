#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    short areaDiameter;
    const float PI = 3.14;

    cout << "Enter circle area Though diameter\n";
    cin >> areaDiameter;

    float Area = PI * pow(areaDiameter, 2) / 4;

    cout << Area << endl;
    cout << ceil(Area) << endl;

    return 0;
}