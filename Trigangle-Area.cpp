#include <iostream>
using namespace std;

int main()

{
    short triagsnle;
    short Area;

    cout << "Enter Area\n";
    cin >> Area;

    cout << "Enter trigagle\n";
    cin >> triagsnle;

    short counter = Area / 2 * triagsnle;
    cout << counter << endl;

    return 0;
}