#include <iostream>
#include <cmath>
using namespace std;

void inscribedAsquare(float &UserInput)

{
    cout << "Enter Area square\n";
    cin >> UserInput;
}

float Area(float Square)
{
    float caluartor = (M_PI * pow(Square, 2)) / 4;
    return caluartor;
}

int main()

{
    float Num1;
    inscribedAsquare(Num1);
    float Atra = Area(static_cast<float>(Num1));
    cout << Atra << endl;

    return 0;
}