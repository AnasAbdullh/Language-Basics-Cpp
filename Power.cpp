#include <iostream>
using namespace std;

int main()

{
    short Power;
    short Num1;
    short Num2;
    short Num3;

    cout << " Enter Number\n";
    cin >> Num1;

    Power = Num1 * Num1;
    Num2 = Power * Num1;
    Num3 = Num2 * Num1;

    cout << Power << endl;
    cout << Num2 << endl;
    cout << Num3 << endl;

    return 0;
}