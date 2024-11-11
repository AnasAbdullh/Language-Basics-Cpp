#include <iostream>

using namespace std;

void UserAsk(int &totalSales)
{

    cout << "Enter the total Sales\n";
    cin >> totalSales;
}

void checkSales(int total)
{
    if (total > 1000000)
    {
        cout << total * 0.01 << endl;
    }
    else if (total > 500000 && total < 1000000)
    {
        cout << total * 0.02 << endl;
    }
    else if (total > 100000 && total < 500000)
    {
        cout << total * 0.03 << endl;
    }
    else if (total > 50000 && total < 100000)
    {
        cout << total * 0.05 << endl;
    }
    else
    {
        cout << total << endl;
    }
}

int main()

{
    int totalSales;
    UserAsk(totalSales);
    checkSales(totalSales);

    return 0;
}