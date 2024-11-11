#include <iostream>
using namespace std;

void userAsk(short &Month)
{
    cout << "Enter the Month\n";
    cin >> Month;
}
void MonthOfYear(short Number)
{
    if (Number == 1)
    {
        cout << "January\n";
    }
    else if (Number == 2)
    {
        cout << "February\n";
    }
    else if (Number == 3)
    {
        cout << "March\n";
    }
    else if (Number == 4)
    {
        cout << "April\n";
    }
    else if (Number == 5)
    {
        cout << "May\n";
    }
    else if (Number == 6)
    {
        cout << "June\n";
    }
    else if (Number == 7)
    {
        cout << "July\n";
    }
    else if (Number == 8)
    {
        cout << "August\n";
    }
    else if (Number == 9)
    {
        cout << "September\n";
    }
    else if (Number == 10)
    {
        cout << "October\n";
    }
    else if (Number == 11)
    {
        cout << "November\n";
    }
    else if (Number == 12)
    {
        cout << "December\n";
    }
    else
    {
        cout << "Wrong Month" << endl;
    }
}
int main()

{
    short MonYear;
    userAsk(MonYear);
    MonthOfYear(MonYear);

    return 0;
}