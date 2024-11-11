#include <iostream>

using namespace std;

void MysumProcelure()
{
    short Num1;
    short Num2;

    cout << "Please Enter Number1?\n";
    cin >> Num1;

    cout << "Please Enter Number2?\n";
    cin >> Num2;

    cout << "*************************\n";
    cout << Num1 + Num2 << endl;
}

int MysumFuntions()
{
    short Num1;
    short Num2;

    cout << "Please Enter Number1?\n";
    cin >> Num1;

    cout << "Please Enter Number2?\n";
    cin >> Num2;

    cout << "*************************\n";

    return Num1 + Num2;
}

int main()

{

    MysumProcelure();
    cout << MysumFuntions() + 10 / 2 << endl;

    return 0;
}