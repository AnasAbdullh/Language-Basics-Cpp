#include <iostream>

using namespace std;
void fatorial()
{
    short number;
    cout << "Enter Number\n";
    cin >> number;
    while (number <= 0)
    {
        cout << "Factorial Must be Positive Number\n";
        cin >> number;
    }

    short some = number;
    number = number - 1;

    while (number >= 1)
    {
        some *= number;
        number--;
    }
    cout << some << endl;
}

int main()

{
    fatorial();

    return 0;
}