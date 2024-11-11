#include <iostream>
#include <cmath>
using namespace std;

void UserInput(short &area, short &Triangle)
{
    cout << "Enter Area\n";
    cin >> area;

    cout << "Enter Isosceles Triangle\n";
    cin >> Triangle;
}
float baseInscrribedToTriangle(float Area, float Isosceles)
{
    float Base = (M_PI * pow(Isosceles, 2) / 4) * (2 * Area - Isosceles) / (2 * Area + Isosceles);
    return Base;
}

int main()

{
    short area, triangle;
    UserInput(area, triangle);
    float Inscribed_in_an_Isosceles_Triangle = baseInscrribedToTriangle(area, triangle);
    cout << Inscribed_in_an_Isosceles_Triangle << endl;

    return 0;
}