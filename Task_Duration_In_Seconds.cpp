#include <iostream>
using namespace std;

int main()

{
    float days;
    float hours;
    float minutes;
    float seconds;

    cout << "Enter days\n";
    cin >> days;
    days = days * 24 * 60 * 60;

    cout << "Enter hours\n";
    cin >> hours;
    hours = hours * 60 * 60;

    cout << "Enter minutes\n";
    cin >> minutes;
    minutes = minutes * 60;

    cout << "Enter seconds\n";
    cin >> seconds;

    float total = days + hours + minutes + seconds;

    cout << total << endl;


    

    return 0;
}