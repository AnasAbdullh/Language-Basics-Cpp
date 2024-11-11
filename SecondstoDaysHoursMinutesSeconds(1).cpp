#include <iostream>
#include <cmath>
using namespace std;

void UserAsK(int &seconds)
{
    
    cout << "Enter the seconds\n";
    cin >> seconds;
}
void converSeconds(int second)
{
    int SecondsPerDay = 24 * 60 * 60;
    int SecondsPerHours = 60 * 60;
    int SecondsPerMinut = 60;

    int SecondsOfDay;
    int SecondsOfHours;
    int SecondsOfMinut;

    SecondsOfDay = floor(second / SecondsPerDay);
    int remebint = second % SecondsPerDay;

    SecondsOfHours = floor(remebint / SecondsPerHours);
    remebint = remebint % SecondsPerHours;

    SecondsOfMinut = floor(remebint / SecondsPerMinut);
    remebint = remebint % SecondsPerMinut;

    int Secondsresult = remebint;

    cout << SecondsOfDay << "\n"
         << SecondsOfHours << "\n"
         << SecondsOfMinut << "\n"
         << Secondsresult << endl;
}

int main()

{
    int secondser = 25;
    UserAsK(secondser);
    converSeconds(secondser);

    return 0;
}