#include <iostream>
using namespace std;

int main()

{
    const float PI = 3.14;
    short inscribed;

    cout << "Enter inscribed\n";
    cin >> inscribed;

    float Area = (PI * (inscribed * inscribed)) / 4;

    cout << Area << endl;
    

    return 0;
}