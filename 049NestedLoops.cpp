#include <iostream>
using namespace std;
short num = 1;
void loopLetter()
{
    for (short i = 65; i < 91; i++)
    {
        for (short Letter = 65; Letter < 91; Letter++)
        {
            cout << (char)i << (char)Letter << endl;
        }
    }
}
void starz()
{
    for (size_t i = 10; i >= 1; i--)
    {
        for (size_t startz = 1; startz <= i; startz++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void NumbersLoops()
{
    for (size_t i = 10; i >= 1; i--)
    {
        for (size_t number = 1; number <= i; number++)
        {
            cout << number << " ";
        }
        cout << "\n";
    }
}

void Nestedloop()
{
    for (size_t i = 1; i <= 10; i++)
    {

        for (size_t count = 1; count <= i; count++)
        {

            cout << count;
        }
        cout << "\n";
    }
}
void charct()
{
    for (size_t i = 65; i <= 70; i++)
    {
        for (size_t cpt = 65; cpt <= i; cpt++)
        {
            cout << (char)cpt << " ";
        }
        cout << "\n";
    }
}
// الواجب الذي اخذ مني وقا طويلة لاحلة درس رقم 49 ابو هدهود سلسلة مقدمة في c++
void hardHomeWork()

{
    //  short Nested;
    //   short countr = 1;
    for (size_t i = 1; i <= 10; i++) // countr++)
    {
        for (size_t count = ::num; count <= 10; count++)
        {
            cout << count << " ";
        }
        cout << endl;
        ::num++;
    }
}

int main()

{

    // loopLetter();
    // starz();
    // NumbersLoops();
    //  Nestedloop();
    // charct();
    hardHomeWork();
    return 0;
}
