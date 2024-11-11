#include <iostream>
using namespace std;
void Userask(short &Factorial)
{
    cout << "Enter The Factorial\n";
    cin >> Factorial;
}
void Ftaorial(short Num)
{
    short factoril = Num;
    for (size_t i = 1; i < Num; i++)
    {
        factoril = factoril * i;
    }
    cout << factoril << endl;
}

int main()

{
    short factorial;
    Userask(factorial);
    Ftaorial(factorial);

    return 0;
}