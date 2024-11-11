#include <iostream>
using namespace std;

void userask()
{
    cout << "Enter Number\n";
}
short ReadUser()
{
    short Number;
    cin >> Number;
    return Number;
}
short testloop(short i)
{
    for (i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    return 0;
}

int main()

{

    userask();
    cout << testloop(ReadUser()) << endl;

    return 0;
}