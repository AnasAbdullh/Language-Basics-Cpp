#include <iostream>

using namespace std;
struct strAverpass
{
    short Mark[3];
};
void checkAndUserAsk(strAverpass mark[3])
{
    short result = 0;
    for (short i = 0; i < 3; i++, result++)
    {

        cout << "Enter your mark " << i + 1 << endl;
        cin >> mark[result].Mark[i];
    }
}
void checkIf(strAverpass check[3])
{
    short result = (check[0].Mark[0] + check[1].Mark[1] + check[2].Mark[2]) / 3;

    if (result >= 50)
    {
        cout << result << endl;
        cout << "PASS" << endl;
    }
    else
    {
        cout << "Fali" << endl;
    }
}

int main()

{
    strAverpass result[3];
    checkAndUserAsk(result);
    checkIf(result);

    return 0;
}
