#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    int Seconds;

    int Days = 24 * 60 * 60;
    short Hours = 60 * 60;
    short Minutes = 60;
    float Second;

    cout << "Enter the Seconds\n";
    cin >> Seconds;

    float Day = floor(Seconds / Days);
    int remeber = Seconds % Days;

    float hour = floor(remeber / Hours);
    remeber = remeber % Hours;

    float minute = floor(remeber / Minutes);
    remeber = remeber % Minutes;

    Second = remeber;

    cout << Day << ": " << hour << " :" << minute << ": " << Second << endl;

    float Swap = (Day + hour + minute + Second);
    cout << round(Swap) << endl;

    return 0;
}