#include <iostream>
using namespace std;
enum enDayofweek
{
    Sun = 1,
    Mon = 2,
    Tues = 3,
    Wend = 4,
    Thur = 5,
    fri = 6,
    Stur = 7,

};

void userAsk()
{
    cout << "**********************" << endl;
    cout << "Enter day" << endl;
    cout << "**********************" << endl;
}
enDayofweek readUser()
{
    enDayofweek week;
    short Day;
    cin >> Day;
    return (enDayofweek)Day;
}
string MyDay(enDayofweek day)
{
    switch (day)
    {
    case enDayofweek::Sun:
        return "Sunday";
        break;
    case enDayofweek::Mon:
        return "Monday";
        break;
    case enDayofweek::Tues:
        return "Tuesday";
        break;
    case enDayofweek::Wend:
        return "Wednesday";
        break;
    case enDayofweek::Thur:
        return "Thursday";
        break;
    case enDayofweek::fri:
        return "Friday";
        break;
    case enDayofweek::Stur:
        return "Saturday";
        break;

    default:
        return " Wrong Day";
    }
}

int main()

{
    userAsk();
    cout << "Its today\n"
         << MyDay(readUser()) << endl;

    return 0;
}