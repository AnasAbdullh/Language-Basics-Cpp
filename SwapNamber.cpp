#include <iostream>

using namespace std;

void aksuserswap(short &Number1,
                 short &Number2)
{

    cout << "Enter number 1\n";
    cin >> Number1;

    cout << "Enter number 2\n";
    cin >> Number2;

    cout << Number1 << "\n"
         << Number2 << endl;
}

void SwapNmuber(short &swap1, short &swap2)
{

    int swap;
    swap = swap1;
    swap1 = swap2;
    swap2 = swap;
  //  return swap1, swap2;
}

int main()

{
    short Num1, num2;

    aksuserswap(Num1, num2);
    SwapNmuber(Num1, num2);

    cout << "*****************\n";

    cout << Num1 << "\n"
         << num2 << endl;

    return 0;
}