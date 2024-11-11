#include <iostream>
#include <cmath>

using namespace std;

struct strInformations
{
    string Name;
    short Age;
    string City;
    string Country;
    int MonthlySalary;
    int YearSalary;
    char Gender;
    bool Married;
};

void UserAsk(strInformations &About)
{
    cout << "Enter your Name\n";
    cin >> About.Name;

    cout << "Enter your Age\n";
    cin >> About.Age;

    cout << "Enter your City\n";
    cin >> About.City;

    cout << "Enter your country\n";
    cin >> About.Country;

    cout << "Enter your Monthly Salary\n";
    cin >> About.MonthlySalary;

    cout << "Enter your yearly Salary\n";
    cin >> About.YearSalary;

    cout << "Enter Gender littel\n";
    cin >> About.Gender;

    cout << "Enter Married true Or false\n";
    cin >> About.Married;
}

void PrintforUser(strInformations PrintInfo)
{
    cout << "**************************************\n\n";

    cout << "Name :" << PrintInfo.Name << endl;
    cout << "Age :" << PrintInfo.Age << endl;
    cout << "City :" << PrintInfo.City << endl;
    cout << "Country :" << PrintInfo.Country << endl;
    cout << "Monthly Salary :" << PrintInfo.MonthlySalary << endl;
    cout << "Yearly Salary :" << PrintInfo.YearSalary << endl;
    cout << "Gender :" << PrintInfo.Gender << endl;
    cout << "Married :" << PrintInfo.Married << endl;

    cout << "**************************************\n\n";
}

int main()

{
    strInformations MyInfo;
    UserAsk(MyInfo);
    PrintforUser(MyInfo);
    
   // cout << anas << endl;

    return 0;
}