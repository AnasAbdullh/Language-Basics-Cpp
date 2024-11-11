#include <iostream>
using namespace std;

int main()

{
    const float PI = 3.14;
    short Diameter;
    float Area;

    cout << "Enter Diameter\n";
    cin >> Diameter;

    Area = PI * Diameter * Diameter / 4;

    cout << Area << endl;

    return 0;
}