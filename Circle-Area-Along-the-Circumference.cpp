#include <iostream>
using namespace std;

int main()

{
    short along;
    const float PI = 3.14;

    cout << "Enter circle Area along the circumference\n";
    cin >> along;

    float Area = (along * along) / (4 * PI);

    cout << Area << endl;
   
    

    return 0;
}