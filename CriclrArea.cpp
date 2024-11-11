#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    short circleArea;
    const float PI = 3.14;

    cout << "Enter circle Area\n";
    cin >> circleArea;

    float Area = PI * pow(circleArea, 2);
    cout << Area << endl;
    cout << ceil(Area) << endl;

    return 0;
}