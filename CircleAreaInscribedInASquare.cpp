#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    short inscribed_In_a_square;
    const float PI = 3.14;

    cout << "Enter Circle area inscribed in a square\n";
    cin >> inscribed_In_a_square;

    float Area = PI * pow(inscribed_In_a_square, 2) / 4;
    cout << Area << endl;
    cout << ceil(Area) << endl;

    return 0;
}