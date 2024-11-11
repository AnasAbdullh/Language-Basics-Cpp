#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()

{
    string st1 = "43.22";

    int str = stoi(st1);

    float stri = stof(st1);

    double strug = stod(st1);

    cout << str << "\n"
         << stri << "\n"
         << strug
         << endl;

    short N1 = 20;

    string coner = to_string(N1);

    cout << N1 << endl;

    double N2 = 33.5;

    string doul = to_string(N2);

    cout << doul << endl;

    float N3 = 55.23;

    string flo = to_string(N3);

    int net;

    net = N3;

    net = (int)N3;

    net = int(N3);

    cout << net << endl;

    return 0;
}