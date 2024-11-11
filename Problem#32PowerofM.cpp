#include <iostream>

using namespace std;
void power()
{
    short Number;
    short Ofpower;
    short i = 1;
    cout << "Enter number\n";
    cin >> Number;
    cout << "Enter of number\n";
    cin >> Ofpower;
    short sum = Number;
    while (Ofpower > i)
    {
        sum *= Number;
        i++;
    }
    cout << sum << endl;
}

int main()

{
    power();

    return 0;
}