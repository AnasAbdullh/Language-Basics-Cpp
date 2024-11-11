#include <iostream>
using namespace std;

void sumoddnumbers()
{
    short Num;
    cout << "Enter NUmber \n";
    cin >> Num;
    short i = 0;
    short anas = 0;

    while (Num >= i)
    {
        if (i % 2 != 0)
        {
            anas += i;
        }
        i++;
    }
    cout << anas << endl;
}
void Oddsum()
{
    short num;
    cin >> num;
    short counter = 0;
    short Sum = 0;
    while (counter % 2 != 0)
    {
        Sum += counter;
        if (counter == num)
        {
            cout << Sum << endl;
            break;
        }
        counter += 1;
    }
}
void SumEvenNumbersfrom1toN()
{
    short ReadNum;
    cin >> ReadNum;
    short Conter = 0 ;
    short sum;
    cout << Conter << endl;
    cout << sum << endl;
    while (ReadNum >= Conter)
    {
        if (Conter % 2 == 0)
        { // 0 // 2883
            sum += Conter;
        }
        Conter++;
    }
    cout << sum << endl;
}

int main()

{
    //  sumoddnumbers();
    SumEvenNumbersfrom1toN();

    return 0;
}
