#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    float areaInscribed;
    float IsoscelesTriagnle;
    const float PI = 3.14;

    cout << "Enter area Inscribed \n";
    cin >> areaInscribed;

    cout << "Enter Isosceles Triangle\n";
    cin >> IsoscelesTriagnle;

    float Area = (PI * pow(IsoscelesTriagnle, 2) / 4) * (2 * areaInscribed - IsoscelesTriagnle) / (2 * areaInscribed + IsoscelesTriagnle);
    cout << (Area) << endl;
    cout << floor(Area) << endl;

    return 0;
}