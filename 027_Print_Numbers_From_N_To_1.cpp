#include <iostream>
using namespace std;

void askUser()
{
    cout << "Enter Number\n";
}
void Readuser(short &Number)
{

    cin >> Number;
}
void NumTozero(short num)
{

    for (size_t i = num; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()

{
    short tozero;
    askUser();
    Readuser(tozero);
    NumTozero(tozero);

    return 0;
}