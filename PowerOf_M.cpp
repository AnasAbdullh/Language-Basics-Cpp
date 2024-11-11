#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    float Number;
    float Power;

    cout << "Enter the Number\n";
    cin >> Number;

    cout << "Enter the Power\n";
    cin >> Power;

    cout << pow(Number, Power) << endl;
    cout << round(pow(Number, Power)) << endl;

    return 0;
}