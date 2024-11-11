#include <iostream>

using namespace std;
void numtoOne()
{

    short num;
    cout << "Enter number\n";
    cin >> num;
    while (num >= 1)
    {
        cout << num << endl;
        num--;
    }
}
int main()

{
    numtoOne();

    return 0;
}