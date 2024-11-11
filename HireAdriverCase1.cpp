#include <iostream>
using namespace std;

struct strHireAdriverCase1
{
    short Age;
    bool DriverLicense;
};

void UserAsk(strHireAdriverCase1 &info)
{
    cout << "Enter your Age\n";
    cin >> info.Age;

    cout << "Are you have a driver License\n";
    cin >> info.DriverLicense;
}
void checkForInforamtions(strHireAdriverCase1 check)
{
    if (check.Age > 21 && check.DriverLicense == true)
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}

int main()
{
    strHireAdriverCase1 input;
    UserAsk(input);
    checkForInforamtions(input);

    return 0;
}