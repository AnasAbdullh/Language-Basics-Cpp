#include <iostream>
using namespace std;

struct Simple_Calculator
{
    int Number[3];

    char OperationType;
};
void AskUser(Simple_Calculator &simple)
{

    for (short i = 0; i < 3; i++)
    {
        cout << "Enter Number :" << i + 1 << endl;
        cin >> simple.Number[i];
    }
    cout << "Enter the type Operation\n";
    cin >> simple.OperationType;
}
void operation(Simple_Calculator type)
{
    // short ans = stoi(type.OperationType);
    switch (type.OperationType)
    {
    case '+':
        cout << type.Number[0] + type.Number[1] + type.Number[2] << endl;
        break;
    case '-':
        cout << type.Number[0] - type.Number[1] << endl;
        break;
    case '*':
        cout << type.Number[0] * type.Number[1] << endl;
        break;
    case '/':
        cout << type.Number[0] / type.Number[1] << endl;
        break;
    default:
        cout << type.Number[0] % type.Number[1];
        break;
    }
}

int main()

{
    Simple_Calculator callo;
    AskUser(callo);
    operation(callo);
    short djd[2];
    djd[4] = 22;

    cout << djd[4] << endl;

    return 0;
}