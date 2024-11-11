#include <iostream>

using namespace std;
void Countune(short i)
{
    short sum = 0;
    short counry = 0;

    for (short i = 1; i <= 5; i++)
    {
        cout << " Enter Number " << i << endl;
        cin >> counry;
        //  bool anas = counry > 50;
        if (counry > 50)
        {
            continue;
        }
        sum += counry;
    }
    cout << sum << endl;
}
void aa(short g[2])
{
    Countune(g[0]);
    Countune(g[1]);
}
int main()

{
    short c[2];
    // for (size_t i = 1; i <= 10; i++)
    // {
    //     if (i == 6)
    //     {
    //         continue;
    //     }
    //     cout << i << endl;
    // }
    // Countune();
    aa(c);

    return 0;
}