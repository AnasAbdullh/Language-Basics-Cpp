#include <iostream>

using namespace std;

void ReadUserInput(float Number[3])
{
    cout << "Please Enter Gradel 1 ?\n";
    cin >> Number[0];

    cout << "Please Enter Gradel 2 ?\n";
    cin >> Number[1];

    cout << "Please Enter Gradel 3 \n";
    cin >> Number[2];
}

float Gradel(float Num[3])
{

    return (Num[0] + Num[1] + Num[2]) / 3;
}

int main()
{
    float Num[3];
    ReadUserInput(Num);
    Gradel(Num);
    float result = Gradel(Num);
    cout << "The average of Grades is " << result << endl;

    return 0;
}