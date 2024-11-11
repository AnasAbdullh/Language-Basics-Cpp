#include <iostream>
#include <string>

using namespace std;

struct Infomations
{
    string FistName;
    string LastName;
    int Age;
    int phone;
};

void ReadUserInput(Infomations &Read)
{
    cout << "Enter first Name\n";
    cin >> Read.FistName;

    cout << "Enter Last Name\n";
    cin >> Read.LastName;

    cout << "Enter your Age\n";
    cin >> Read.Age;

    cout << "Enter Your Phone\n";
    cin >> Read.phone;
}

void printInfo(Infomations anas)
{
    cout << anas.FistName << endl;
    cout << anas.LastName << endl;
    cout << anas.Age << endl;
    cout << anas.phone << endl;
}
void Two(Infomations Numbers[100], int &Length)
{

    cout << "Enter NUMBERS loop\n"
         << endl;
    cin >> Length;

    for (short i = 0; i < Length; i++)
    {
        ReadUserInput(Numbers[i]);
    }

    // ReadUserInput(Numbers[0]);
    // ReadUserInput(Numbers[1]);
}
void twos(Infomations Numb[100], int Length)
{

    for (short i = 0; i <= Length - 1; i++)
    {
        printInfo(Numb[i]);
    }

    // printInfo(Numb[0]);
    // printInfo(Numb[1]);
}

int main()

{
    Infomations anas[100];
    int length = 1;
    Two(anas, length);
    twos(anas, length);

    return 0;
}