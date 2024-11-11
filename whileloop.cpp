#include <iostream>

using namespace std;
void forloop()
{
    cout << "\n for loop\n"
         << endl;
    for (size_t i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }
}
void whileloop()
{
    cout << "\n while loop\n";
    short i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
}
void askuser()
{
    short num;
    cout << "Enter number\n";
    cin >> num;
    while (num < 0)
    {
        cout << "Please Enter number Viald\n";
        cin >> num;
    }
    cout << "this number is " << num << endl;
}

short Numberreadinring(short one, short two)
{
    short number;
    cout << "please enter number from " << one << " to " << two << endl;
    cin >> number;
    while (number > one || number < two)
    {
        cout << "ENter number between " << one << " and " << two << endl;
        cin >> number;
    }
    return number;
}

int main()

{
    short one = 3, two = 2;

    // forloop();
    //  whileloop();
    // askuser();
    cout << " its number " << Numberreadinring(one, two) << endl;

    return 0;
}