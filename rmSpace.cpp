#include <iostream>
#include <string>

using namespace std;
void rmSpace()
{
    string text;
    cout << "Enter string\n";
    getline(cin, text);
    string result;
    for (short i = 0; i < text.length(); i++)

    {
        // cout << text.length() << endl;
        // cout << i << endl;
        if (text[i] != ' ')

        {
            result += text[i];
            //  cout << result << endl;
        }
    }
    cout << result << ".cpp";
}

int main()

{

    // string str = "Hello World with spaces";
    // string result = ""; // سلسلة جديدة لتخزين النتيجة

    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] != ' ')
    //     {                     // إذا كان الحرف ليس مسافة
    //         result += str[i]; // نضيفه إلى السلسلة الجديدة
    //     }
    // }

    // cout << result << endl; // طباعة السلسلة بعد إزالة المسافات

    // removeSpce();
    rmSpace();

    return 0;
}