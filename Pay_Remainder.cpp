#include <iostream>
using namespace std;

int main()

{
    short TotalBill;
    short CashPaid;

    cout << "Enter total Bill\n";
    cin >> TotalBill;

    cout << "Enter Cash Paid\n";
    cin >> CashPaid;

    cout << CashPaid - TotalBill << endl;

    return 0;
}