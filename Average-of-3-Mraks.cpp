#include <iostream>
using namespace std;

int main()

{
    int MarksOne;
    string MraksTwo;
    short MarksThree;

    cout << "Enter your Mark first\n";
    cin >> MarksOne;

    cout << "Enter your Mark seconds \n";
    cin.ignore(1, '\n');
    getline(cin, MraksTwo);

    cout << "Enter your Mark three\n";
    cin >> MarksThree;

    //   cout << (MarksOne + MraksTwo + MarksThree) / 3 << endl;

    return 0;
}