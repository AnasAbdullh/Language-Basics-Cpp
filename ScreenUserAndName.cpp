#include <iostream>
using namespace std;

void NameOnScreen()
{
    string Name;
    cout << "Enter Name" << endl;
    cin >> Name;
    cout << Name << endl;
}

string NameUser(string Name)
{
    cout << "Enter Name" << endl;
    cin >> Name;
    return Name;
}

int main()
{
    NameOnScreen();

    string userName = NameUser(""); // تمرير قيمة فارغة للدالة
    cout << userName << endl;       // طباعة الاسم الذي تم إدخاله

    return 0;
}
