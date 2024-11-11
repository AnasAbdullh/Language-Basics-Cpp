#include <iostream>
#include <cmath>
using namespace std;
void UserInput(float &days, float &hours, float &minutes, float &seconds)
{
    cout << "Enter day\n";
    cin >> days;

    cout << "Enter hours\n";
    cin >> hours;

    cout << "Enter Minutes\n";
    cin >> minutes;

    cout << "Enter seconds\n";
    cin >> seconds;
}

float DurationInSeconds(float day, float hours, float minute, float second)
{
    float days = 24 * 60 * 60;
    float hour = 60 * 60;
    float minutes = 60;

    float secondsOfDays = day * days;
    float secondsOfHours = hours * hour;
    float secondsOfMinutes = minute * minute;

    float result = secondsOfDays + secondsOfHours + secondsOfMinutes + second;
    return result;
}

int main()

{
    float Num1, Num2, Num3, Num4;
    UserInput(Num1, Num2, Num3, Num4);
    float result = DurationInSeconds(Num1, Num2, Num3, Num4);
    cout << result << endl;

    return 0;
}