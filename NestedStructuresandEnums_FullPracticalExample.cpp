#include <iostream>

using namespace std;

struct stAdditionalData
{
    enum enSection
    {
        HR,
        IT = 100,
        Finance,
        Marketing
    };

    enum enJob_Title
    {
        Manager,
        Developer,
        Analyst,
        Clerk
    };

    enum enJob_Status
    {
        Full_Time,
        Part_Time,
        Contractor
    };

    short Salary;
    short YearsOfExperience;
    short NumberOfCompletedProject;
};

struct stAdrress
{
    string stStreetName;
    short BuildingNumber;
    short MailBox;
    short zipCode;
};

struct stContactInformations
{
    int NumberPhone;
    string Emails;
    string AccountsFacebook;
    stAdrress adrress;
};
struct stBasic_Data_Employee
{
    string Namefirst;
    string NameLast;
    int Job_ID;
    short Age;
    stAdditionalData additional;
    stContactInformations ContactInfo;
};
int main()

{
    stBasic_Data_Employee Info;
    (Info.additional.IT == stAdditionalData ::IT);

    // cout << "Enter First Name\n";
    // cin >> Info.Namefirst;

    // cout << "Enter last Name\n";
    // cin >> Info.NameLast;

    // cout << "Enter your Age\n";
    // cin >> Info.Age;

    // cout << "Enter job id\n";
    // cin >> Info.Job_ID;

    // cout << "Enter the street\n";
    // cin >> Info.ContactInfo.adrress.stStreetName;

    // cout << "Enter buliding Number\n";
    // cin >> Info.ContactInfo.adrress.BuildingNumber;

    // cout << "thr mail box\n";
    // cin >> Info.ContactInfo.adrress.MailBox;

    // cout << "Enter zip Code\n";
    // cin >> Info.ContactInfo.adrress.zipCode;

    // cout << "Enter Emails\n";
    // cin >> Info.ContactInfo.Emails;

    // cout << "Enter Accounts Facebook\n";
    // cin >> Info.ContactInfo.AccountsFacebook;

    // cout << "Enter Number Phone\n";
    // cin >> Info.ContactInfo.NumberPhone;

    // cout << "Enter Salary\n";
    // cin >> Info.additional.Salary;

    // cout << "Enter Years Of Exprience\n";
    // cin >> Info.additional.YearsOfExperience;

    // cout << "Enter Number Of Completed Project\n";
    // cin >> Info.additional.NumberOfCompletedProject;

    cout << Info.Namefirst << "\n"
         << Info.NameLast << "\n"
         << Info.Age << "\n"
         << Info.Job_ID << "\n"
         << Info.ContactInfo.adrress.BuildingNumber << "\n"
         << Info.ContactInfo.adrress.MailBox << "\n"
         << Info.ContactInfo.adrress.stStreetName << "\n"
         << Info.ContactInfo.adrress.zipCode << "\n"
         << Info.ContactInfo.AccountsFacebook << "\n"
         << Info.ContactInfo.Emails << "\n"
         << Info.ContactInfo.NumberPhone << "\n"
         << Info.additional.Salary << "\n"
         << Info.additional.YearsOfExperience << "\n"
         << Info.additional.IT << "\n"
         << (Info.additional.IT == stAdditionalData ::IT ? "IT" : "HR") << endl;

    return 0;
}