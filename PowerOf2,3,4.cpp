#include <iostream>
#include <cmath>
using namespace std;
void print()
{
    cout << "Enter number\n";
}

void Power(short Num)
{
    short Number = pow(Num, 2);
    short Number2 = pow(Num, 3);
    short Number3 = pow(Num, 4);

    cout << Number << "\n"
         << Number2 << "\n"
         << Number3 << endl;
}

int main()

{
    short Name;
    print();
    cin >> Name;

    Power(Name);

    return 0;
}