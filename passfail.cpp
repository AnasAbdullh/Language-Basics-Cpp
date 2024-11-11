#include <iostream>

using namespace std;

struct strMark
{
    short Mark;
};

void UserAskMark(strMark &mark)
{
    cout << "Enter your mark\n";
    cin >> mark.Mark;
}
void checkresult(strMark check)
{
    if (check.Mark >= 50)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}
int main()

{
    strMark Input;
    UserAskMark(Input);
    checkresult(Input);

    return 0;
}