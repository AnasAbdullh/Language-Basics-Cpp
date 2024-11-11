#include <iostream>

using namespace std;

enum Gendor
{
    Male,
    famale
};

enum Status
{
    Single,
    Married = 23
};

enum MyforvimeColor
{
    red = 90,
    blue = 80,
    green = 70,
    yellow = 60,
    black = 50

};

struct ContactInformations
{
    string Emails;
    int NumberPhone;
    string Facebook;
};

struct Address
{
    string City;
    string Country;
    string directorate;
    string Area;
    string theStreet;
};

struct Salars
{
    short MontlySalary;
    int YearlySalary;
};

struct Informations
{
    string Name;
    short Age;
    char Gender;
    bool Married;
    Salars Salary;
    Address Addres;
    ContactInformations Contact;
};

int main()

{
    Gendor grender;
    grender = Gendor ::famale;

    Status status;
    status = Status ::Married;

    MyforvimeColor blue;
    blue = MyforvimeColor ::blue;

    MyforvimeColor green;
    green = MyforvimeColor ::green;

    MyforvimeColor yellow;
    yellow = MyforvimeColor::yellow;

    MyforvimeColor red;
    red = MyforvimeColor ::red;

    MyforvimeColor black;
    black = MyforvimeColor ::black;

    MyforvimeColor anas = MyforvimeColor ::black;

    Informations AboutUser;

    // cout << "Enter Your Name\n";
    // cin >> AboutUser.Name;

    // cout << "Enter your Age\n";
    // cin >> AboutUser.Age;

    // cout << "Enter your City\n";
    // cin >> AboutUser.Addres.City;

    // cout << "Enter your Country\n";
    // cin >> AboutUser.Addres.Country;

    // cout << "Enter your Monthly Salary\n";
    // cin >> AboutUser.Salary.MontlySalary;

    // cout << "Enter your Yearly Salary\n";
    // cin >> AboutUser.Salary.YearlySalary;

    // cout << "Enter Gender Litter\n";
    // cin >> AboutUser.Gender;

    // cout << "Enter the Married\n";
    // cin >> AboutUser.Married;

    // cout << "Enter your Emails\n";
    // cin >> AboutUser.Contact.Emails;

    // cout << "Enter your phone\n";
    // cin >> AboutUser.Contact.NumberPhone;

    // cout << "Enter your Accounts Facebook\n";
    // cin >> AboutUser.Contact.Facebook;

    // cout << "Enter the directorate\n";
    // cin >> AboutUser.Addres.directorate;

    // cout << "Enter the Area\n";
    // cin >> AboutUser.Addres.Area;

    // cout << "Enter the Street\n";
    // cin >> AboutUser.Addres.theStreet;

    cout << "**********************************" << endl;

    // cout << AboutUser.Name << "\n"
    //      << AboutUser.Age << "\n"
    //      << AboutUser.Addres.City << "\n"
    //      << AboutUser.Addres.Country << "\n"
    //      << AboutUser.Salary.MontlySalary << "\n"
    //      << AboutUser.Salary.YearlySalary << "\n"
    //      << AboutUser.Gender << "\n"
    //      << AboutUser.Married << "\n"
    //      << AboutUser.Contact.Emails << "\n"
    //      << AboutUser.Contact.NumberPhone << "\n"
    //      << AboutUser.Contact.Facebook << "\n"
    //      << AboutUser.Addres.directorate << "\n"
    //      << AboutUser.Addres.Area << "\n"
    //      << AboutUser.Addres.theStreet << "\n"
    cout << grender << "\n"
         << status << "\n"
         << green << "\n"
         << blue << "\n"
         << black << "\n"
         << red << "\n"
         << yellow << "\n"
         << anas << "\n"

         //      << Color << "\n"
         //      << endl;

         << "**********************************" << endl;

    return 0;
}