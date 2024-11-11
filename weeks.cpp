#include <iostream>

using namespace std;

enum Weeks
{
    sta = 1,
    sun = 2,
    mon = 3,
    thre = 4,
    mut = 5,
    tuse = 6,
    fri = 7
};

int main()

{
    short day;

    cout << "Enter the day\n";
    cin >> day;

    Weeks days = static_cast<Weeks>(day);

    switch (days)
    {
    case sta:
        cout << "staurday\n";
        break;
    case sun:
        cout << "sunday\n";
        break;
    case mon:
        cout << "Monday\n";
        break;
    case thre:
        cout << "thusdat\n";
        break;
    case mut:
        cout << "Mutdays\n";
        break;
    case tuse:
        cout << "tuseday\n";
        break;
    case fri:
        cout << "Fraidy\n";
        break;
    default:
        break;
    }

    return 0;
}