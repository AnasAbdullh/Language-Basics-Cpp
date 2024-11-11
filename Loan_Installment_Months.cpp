#include <iostream>
using namespace std;

int main()

{
    short LoanaAmount;
    short Monthly_Payment;

    cout << "Enter Loan Amount\n";
    cin >> LoanaAmount;

    cout << "Enter Monthly Payment\n";
    cin >> Monthly_Payment;

    short totalMonthly = LoanaAmount / Monthly_Payment;

    cout << totalMonthly << " Months" << endl;

    return 0;
}