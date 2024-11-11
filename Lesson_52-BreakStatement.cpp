#include <iostream>
using namespace std;

void breakStatement()
{
    short arry[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    short Num = 30;
    for (short i = 0; i < 10; i++)
    {
        cout << " We are at iteration " << i + 1 << endl;
        if (Num == arry[i])
        {
            cout << Num << " Found at iteration " << i << endl;
            
        }
    }
}

void bersk()
{
    short arr[10] = {10, 20, 44, 55, 33, 22, 99, 88, 99, 100};
    short i = 0;
    while (i <= 9)
    {
        if (arr[i] == 55)
        {
            break;
        }
        i++;
    }
    cout << "Fand :" << i << endl;
}

int main()

{
    // for (size_t i = 1; i <= 9; i++)
    // {
    //     if (i == 4)
    //     {
    //         break;
    //     }
    //     cout << i << endl;
    // }
    //   bersk();
    breakStatement();

    return 0;
}