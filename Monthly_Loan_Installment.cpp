#include <iostream>
using namespace std;

int main()

{
    short LoanAmount;
    short How_many_Month;

    cout << "Enter Loan Amount\n";
    cin >> LoanAmount;

    cout << "How many months you need to settle the loan\n";
    cin >> How_many_Month;

    short CalculateTheMonthlyInstallmentAmount = LoanAmount / How_many_Month;

    cout << CalculateTheMonthlyInstallmentAmount << endl;

    return 0;
}