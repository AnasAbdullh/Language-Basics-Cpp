#include <iostream>
using namespace std;

int main()

{
    short Pennies;
    short Nickels;
    short Dimes;
    short Quarters;
    short Dollars;

    short Penny = 1;
    short Nickel = 5;
    short Dime = 10;
    short Quarter = 25;
    short Dollar = 100;

    cout << "Enter Pennise\n";
    cin >> Pennies;

    cout << "Enter Nickles\n";
    cin >> Nickels;

    cout << "Enter Dimes\n";
    cin >> Dimes;

    cout << "Enter Quarters\n";
    cin >> Quarters;

    cout << "Enter Dollars\n";
    cin >> Dollars;

    float total_pennys = (Pennies * Penny) + (Nickels * Nickel) + (Dimes * Dime) + (Quarters * Quarter) + (Dollar * Dollars);
    float totalDollars = total_pennys / 100;

    cout << total_pennys << endl;
    cout << totalDollars << endl;

    return 0;
}