#include <iostream>

using namespace std;

void UserAsk(short &Grade)
{
    cout << "Enter your Grade\n";
    cin >> Grade;
}
void checkGrade(short check)

{
    if (check >= 90 && check <= 100)
    {
        cout << "A" << endl;
    }
    else if (check >= 80 && check <= 89)
    {
        cout << "B" << endl;
    }
    else if (check >= 70 && check <= 79)
    {
        cout << "C" << endl;
    }
    else if (check >= 60 && check <= 69)
    {
        cout << "D" << endl;
    }
    else if (check >= 50 && check <= 59)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
}

int main()

{
    short Grade;
    UserAsk(Grade);
    checkGrade(Grade);

    return 0;
}