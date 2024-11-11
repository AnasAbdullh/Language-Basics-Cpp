#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    short alongTheCircumference;
    const float PI = 3.14;

    cout << "Enter Aira along The cirumference\n";
    cin >> alongTheCircumference;

    float Area = pow(alongTheCircumference, 2) / (4 * PI);
    cout << Area << endl;
    cout << floor(Area) << endl;

    return 0;
}