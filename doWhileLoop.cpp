#include <iostream>

using namespace std;

short readNumberRang(short from, short to)
{
    short Number;
    do
    {
        cout << "ENter NUmber between\n";
        cin >> Number;
    } while (Number < from || Number > to);
    return Number;
}

int main()

{
    // short i = 6;
    // while (i <= 5)
    // {
    //     cout << "Anas" << endl;
    //     i++;
    // }
    // short country = 6;
    // do
    // {
    //     cout << "Anas Abdallah" << endl;
    //     country++;

    // } while (country <= 10);
    cout << readNumberRang(18, 45) << endl;

    return 0;
}