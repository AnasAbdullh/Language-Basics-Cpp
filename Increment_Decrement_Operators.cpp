#include <iostream>
using namespace std;

int main()

{
    short A = 10;
    short B = 20;

    A++;     // 11
    --B;     // 19
    B = A++; // 11
    A = --B; // 10
    A += 5;
    B *= 3;

    cout << A << endl;
    cout << B << endl;
    return 0;
}