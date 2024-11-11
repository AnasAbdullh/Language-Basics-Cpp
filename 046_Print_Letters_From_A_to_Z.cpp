#include <iostream>
using namespace std;
void printLetters()
{
    char letter;
    for (letter = 65; letter < 91; letter++)
    {
        cout << letter << endl;
    }
}
void smallletters()
{
    char smallletters;
    for (smallletters = 96; smallletters <= 122; smallletters++)
    {
        cout << smallletters << endl;
    }
}

int main()

{
    printLetters();
    smallletters();

    return 0;
}