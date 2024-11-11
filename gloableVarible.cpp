#include <iostream>
#include <cmath>
using namespace std;

int Number = 100;

string Nmae = "Ahemd";

void MyTest()
{

    ::Number = 33;
    cout << ::Number << endl;
    ::Nmae = "Anas";
    cout << ::Nmae << endl;
}

int main()

{

   // MyTest();
    //سوف يمت طباعة التغييرات على جرت على الدالة بعكس اذا تركنها في الاخير او علقناها لان الاولوية تسبق 
    cout << ::Nmae << endl;

    cout << ::Number << endl;
    //هنا سوف يتم طباعة التغييرات العامة لان الدالة اتت متاخر سوف يتم طباعة الافتراضي ومن ثم طباعة القيم والتغيرات التي داخل الدالة
    MyTest();

    return 0;
}