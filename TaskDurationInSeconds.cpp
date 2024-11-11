#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    float Days;
    float Hours;
    float Minutes;
    float Second;

    cout << "Enter the Number of days\n";
    cin >> Days;

    cout << "Enter the number of hours\n";
    cin >> Hours;

    cout << "Enter the number of Minutes\n";
    cin >> Minutes;

    cout << "Enter the number of seconds\n";
    cin >> Second;

    float Seconds = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Second;
    cout << Seconds << endl;
    cout << round(Seconds) << endl;

    return 0;
}