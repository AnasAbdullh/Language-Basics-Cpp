#include <iostream>

using namespace std;

short Test(short num)
{
    short reuslt = num * 3;
    return reuslt;
}
enum Mycolor
{
    red = 1,
    green = 2,
    yellow = 3
};

int main()

{
    int anas;
    //  Mycolor color = Mycolor::green;
    Mycolor color;
    cout << "Enter number\n";
    cin >> anas;
    color = (Mycolor)anas;
    if (color == Mycolor::green)
    {
        cout << "green\n";
    }
    cout << Test(anas) << endl;
    return 0;
}