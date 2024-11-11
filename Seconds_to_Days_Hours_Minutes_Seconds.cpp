#include <iostream>
using namespace std;

int main()

{
    int Seconds;
    cout << "Enter Numbers Seconds\n";
    cin >> Seconds;

    int SecondsPerDay = 24 * 60 * 60;
    int SecondsPerHours = 60 * 60;
    int SecondsPerMinut = 60;

    int NumberOfDays = Seconds / SecondsPerDay;
    int Remainder = Seconds % SecondsPerDay;

    int NumberOfHourse = Remainder / SecondsPerHours;
    Remainder = Remainder % SecondsPerHours;

    int NumberOfMinutes = Remainder / SecondsPerMinut;
    Remainder = Remainder % SecondsPerMinut;
    int NumberOfSeconds = Remainder;

    cout << NumberOfDays << ":" << NumberOfHourse << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;

    return 0;
}