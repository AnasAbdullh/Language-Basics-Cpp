#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()

{
    string string1;
    string string2;
    string string3;

    cout << "Please Enter string\n";
    getline(cin, string1);

    cout << "Please Enter string\n";
    cin >> string2;

    cout << "Please the string\n";
    cin >> string3;

    cout << "************************************\n";

    cout << string1.length() << endl;
    cout << string1[0] << string1[2] << string1[4] << string1[7] << endl;

    string chart = string2 + string3;
    cout << chart << endl;

    short p1 = stoi(string2) * stoi(string3);

    cout << string2 << " * " << string3 << " = " << p1 << endl;

    return 0;
}