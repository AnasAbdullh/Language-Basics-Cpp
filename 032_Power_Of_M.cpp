#include <iostream>
using namespace std;
struct power
{
    short number;
    short OfPower;
};
void askAndRead(power &dicluar)
{
    cout << "Enter Number\n";
    cin >> dicluar.number;
    cout << "Enter Number Of Power\n";
    cin >> dicluar.OfPower;
}
void powerOfM(power caluctor)
{
    short power = caluctor.number;
    for (size_t i = 1; i < caluctor.OfPower; i++)
    {
        caluctor.number = caluctor.number * power;
    }
    cout << caluctor.number << endl;
}

int main()

{
    power ofPower;
    askAndRead(ofPower);
    powerOfM(ofPower);

    return 0;
}