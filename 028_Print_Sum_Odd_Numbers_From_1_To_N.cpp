#include <iostream>
using namespace std;
void userAsk()
{
    cout << "Enter Number\n";
}
void ReadUser(short &Num)
{
    cin >> Num;
}
void sumOdd(short Odd)
{
    short countr = 0;
    for (size_t i = 0; i <= Odd; i++)
    {
        if (i % 2 == 0)
        {
            countr = countr + i;
        }
    }
    cout << countr << endl;
}

int main()

{
    short SumOdd;
    userAsk();
    ReadUser(SumOdd);
    sumOdd(SumOdd);

    return 0;
}