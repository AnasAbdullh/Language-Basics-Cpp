#include <iostream>
using namespace std;

enum Department
{
    HR,
    IT,
    Finance,
    Marketing
};
enum JobTitle
{
    Manager,
    Developer,
    Analyst,
    Clerk
};
enum EmploymentStatus
{
    FullTime,
    PartTime,
    Contractor
};

struct stAddress
{
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};

struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};

struct stEmployee
{
    string FirstName;
    string LastName;
    int ID;
    int Age;
    stContactInfo ContactInfo;
    Department Dept;
    JobTitle Title;
    EmploymentStatus Status;
    float Salary;
    int YearsOfExperience;
    int ProjectsCompleted;
};

int main()
{
    stEmployee Employee1;

    // إدخال البيانات من المستخدم
    cout << "Enter First Name: ";
    cin >> Employee1.FirstName;
    cout << "Enter Last Name: ";
    cin >> Employee1.LastName;
    cout << "Enter ID: ";
    cin >> Employee1.ID;
    cout << "Enter Age: ";
    cin >> Employee1.Age;
    cout << "Enter Email: ";
    cin >> Employee1.ContactInfo.Email;
    cout << "Enter Phone: ";
    cin >> Employee1.ContactInfo.Phone;
    cout << "Enter POBox: ";
    cin >> Employee1.ContactInfo.Address.POBox;
    cout << "Enter ZipCode: ";
    cin >> Employee1.ContactInfo.Address.ZipCode;
    cout << "Enter Street Name: ";
    cin >> Employee1.ContactInfo.Address.StreetName;
    cout << "Enter Building No: ";
    cin >> Employee1.ContactInfo.Address.BuildingNo;

    // يمكن تخصيص القيم هنا أو من خلال إدخال المستخدم
    Employee1.Dept = IT;
    Employee1.Title = Developer;
    Employee1.Status = FullTime;
    Employee1.Salary = 5000;
    Employee1.YearsOfExperience = 10;
    Employee1.ProjectsCompleted = 15;

    cout << "\nEmployee Information:\n";
    cout << "Name: " << Employee1.FirstName << " " << Employee1.LastName << endl;
    cout << "ID: " << Employee1.ID << endl;
    cout << "Age: " << Employee1.Age << endl;
    cout << "Email: " << Employee1.ContactInfo.Email << endl;
    cout << "Phone: " << Employee1.ContactInfo.Phone << endl;
    cout << "POBox: " << Employee1.ContactInfo.Address.POBox << endl;
    cout << "ZipCode: " << Employee1.ContactInfo.Address.ZipCode << endl;
    cout << "Street Name: " << Employee1.ContactInfo.Address.StreetName << endl;
    cout << "Building No: " << Employee1.ContactInfo.Address.BuildingNo << endl;

    return 0;
}
