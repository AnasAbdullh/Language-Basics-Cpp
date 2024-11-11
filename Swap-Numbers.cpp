#include <iostream>
using namespace std;

int main()

{
    short Number1;
    short Number2;
    short Swap;

    cout << "Enter number One\n";
    cin >> Number1;

    cout << "Enter number Two\n";
    cin >> Number2;

    cout << Number1 << endl;
    cout << Number2 << endl;

    cout <<"***********************\n";

    Swap = Number1;
    Number1 = Number2;
    Number2 = Swap;

    cout << Number1 << endl;
    cout << Number2 << endl;

    return 0;
}