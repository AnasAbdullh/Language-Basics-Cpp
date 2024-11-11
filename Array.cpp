#include <iostream>

using namespace std;

int main()

{
    float Number[3];

    cout << "Please Enter Grade1 ?\n";
    cin >> Number[0];

    cout << "Please Enter Grade 2 ?\n";
    cin >> Number[1];

    cout << "Please Enter Grade3? \n";
    cin >> Number[2];

    cout << (Number[0] + Number[1] + Number[2]) / 3 << endl;

    return 0;
}