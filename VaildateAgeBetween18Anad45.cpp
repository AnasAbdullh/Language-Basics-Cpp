#include <iostream>

using namespace std;

void UserAsk(short &Age)
{
    cout << "Enter your Age" << endl;
    cin >> Age;
}

void check(short age)
{
    if (age >= 18 && age <= 45)
    {
        cout << "Vaild Age" << endl;
    }
    else
    {
        cout << "Invalid Age" << endl;
    }
}
int main()

{
    short Age;
    UserAsk(Age);
    check(Age);

    return 0;
}