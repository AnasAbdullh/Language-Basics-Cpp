#include <iostream>
#include <cmath>
using namespace std;

void UserAks(short &Num0, short &Num1)
{
    cout << "Enter Area\n";
    cin >> Num0;

    cout << "Enter diagonal\n";
    cin >> Num1;
}

float CalaiatorAreadiamongl(float Num1, float Num2)
{
    float Area = Num1 * sqrt(pow(Num2, 2) - pow(Num1, 2));
    return Area;
}

int main()

{
    short Num1, Num2;

    UserAks(Num1, Num2);
    float Area = CalaiatorAreadiamongl(static_cast<float>(Num1), static_cast<float>(Num2));

    cout << Area << endl;

    return 0;
}