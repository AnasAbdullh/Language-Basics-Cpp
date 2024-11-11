#include <iostream>
#include <cmath>
using namespace std;

void PrintUser(short &Num1, short &Num2)
{
    cout << "Enter Number\n";
    cin >> Num1;
    cout << "Enter Number power\n";
    cin >> Num2;
}

int Power(short Num1, short Num2)
{
    short Power = pow(Num1, Num2);
    return Power;
}

int main()

{
    short num1, num2;
    PrintUser(num1, num2);

    short result = Power(num1, num2);
    cout << result << endl;

    return 0;
}
