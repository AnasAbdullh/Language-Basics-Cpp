#include <iostream>
using namespace std;

int main()

{
    float BillValue;
    float totalBill;

    cout << "Enter Bill Value\n";
    cin >> BillValue;

    totalBill = BillValue * 1.1 * 1.16;

    cout << totalBill << endl;

    return 0;
}