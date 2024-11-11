#include <iostream>

using namespace std;
void atm()
{
    short pin;
    short countr = 0;

    short Balance = 7500;

    cout << "ENter PIN\n";
    cin >> pin;
    if (pin == 1234)
    {
        cout << Balance << endl;
    }
    else
    {
        while (countr < 2)
        {
            cout << "Wrong PIN\n";
            cout << "ENter PIN\n";
            cin >> pin;
            if (pin == 1234)
            {
                cout << Balance << endl;
                return;
            }
            countr++;
        }
        cout << "Card locked!\n";
    }
}

int main()

{
    atm();
    
    return 0;
}