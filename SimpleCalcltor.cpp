#include <iostream>
using namespace std;
struct SimpleCalcltor
{
    int Number[2];
    string operationType;
};
void UserAskcaluctor(SimpleCalcltor &Calcultor)
{
    short anas = 0;
    for (short i = 0; i < 2; i++, anas++)
    {
        cout << "Enter Number " << i + 1 << endl;
        cin >> Calcultor.Number[i];
    }
    cout << "Enter the Operation Type\n";
    cin >> Calcultor.operationType;
}
void CheckCalautor(SimpleCalcltor num)
{
    if (num.operationType == "+")
    {
        cout << num.Number[0] + num.Number[1] << endl;
    }
    else if (num.operationType == "-")
    {
        cout << num.Number[0] - num.Number[1] << endl;
    }
    else if (num.operationType == "*")
    {
        cout << num.Number[0] * num.Number[1] << endl;
    }
    else if (num.operationType == "/")
    {
        cout << num.Number[0] / num.Number[1] << endl;
    }
    else
    {
        cout << num.Number[0] % num.Number[1] << endl;
    }
}
int main()
{
    SimpleCalcltor anas;
    UserAskcaluctor(anas);
    CheckCalautor(anas);

    return 0;
}