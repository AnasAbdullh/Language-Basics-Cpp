#include <iostream>
#include "../../../usr/include/c++/12/bits/stl_queue.h"
using namespace std;
#define print(x) std::cout << x << std::endl

int main()

{
    short Circle_Area_Inscribed;
    short Isosceles_Triangle;
    const float PI = 3.14;

    cout << "Enter Circle Area Inscribed\n";
    cin >> Circle_Area_Inscribed;

    cout << "Enter Isosceles Triangle\n";
    cin >> Isosceles_Triangle;

    float Area = (PI * Isosceles_Triangle * Isosceles_Triangle / 4) * (2 * Circle_Area_Inscribed - Isosceles_Triangle) / (2 * Circle_Area_Inscribed + Isosceles_Triangle);
    cout << Area << endl;

    print("Anas");
    
    
    

    return 0;
}