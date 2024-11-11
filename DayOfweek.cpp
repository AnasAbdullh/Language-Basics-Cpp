#include <iostream>

using namespace std;

void UserAsk(short &Day)
{
    cout << "Enter Day\n";
    cin >> Day;
}
void Weeks(short day)
{
    if (day == 1)
    {
        cout << "Its Sunday\n";
    }
    else if (day == 2)
    {
        cout << "Its Monday\n";
    }
    else if (day == 3)
    {
        cout << "Its Tuesday\n";
    }
    else if (day == 4)
    {
        cout << "Its Wednesday\n";
    }
    else if (day == 5)
    {
        cout << "Its Thursday\n";
    }
    else if (day == 6)
    {
        cout << "Its Friday\n";
    }
    else if (day == 7)
    {
        cout << "Its Saturday\n";
    }
    else
    {
        cout << "Wrong Day\n";
    }
}
int main()

{
    short dayOfWeek;
    UserAsk(dayOfWeek);
    Weeks(dayOfWeek);

    return 0;
}