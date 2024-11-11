#include <iostream>
using namespace std;


int main()

{
    cout << (12 >= 12) << endl; // 1
    cout << (12 > 7) << endl;   // 1
    cout << (8 < 6) << endl;    // 0
    cout << (8 == 8) << endl;   // 1
    cout << (12 <= 12) << endl; // 1
    cout << (7 == 5) << endl;   // 0
    

    cout << !(12 >= 12) << endl; // 0
    cout << !(12 > 7) << endl;   // 0
    cout << !(8 < 6) << endl;    // 1
    cout << !(8 == 8) << endl;   // 0
    cout << !(12 <= 12) << endl; // 0
    cout << !(7 == 5) << endl;   // 1

    cout << (1 && 1) << endl;    // 1
    cout << (true || 0) << endl; // 1
    cout << (0 || 1) << endl;    // 1
    cout << (0 || 0) << endl;    // 0
    cout << !(0) << endl;        // 1
    cout << !(1 || 0) << endl;   // 0

    cout << ((7 == 7) && (7 > 5)) << endl; // 1
    cout << (7 == 7 && 7 < 5) << endl;     // 0
    cout << (7 == 7 || 7 < 5) << endl;     // 1
    cout << (7 < 7 || 7 > 5) << endl;      // 1
    cout << !(7 == 7 && 7 > 5) << endl;    // 0
    cout << (7 == 7 && !7 < 5) << endl;    // 1

    cout << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;                     // 1
    cout << !((5 > 6 && 7 == 7) || (1 || 0)) << endl;                    // 0
    cout << !((5 > 6 && 7 == 7) || !(1 || 0)) << endl;                   // 1
    cout << !((5 > 6 && 7 == 7) && !(1 || 0)) << endl;                   // 1
    cout << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true) << endl;  // 0
    cout << (((5 > 6 && !7 <= 8) && (8 > 1 || 4 <= 3)) || true) << endl; // 1

    return 0;
}