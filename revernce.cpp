#include <iostream>
using namespace std;

struct AveragePassFail {
    int Mark[3];  // مصفوفة تحتوي على 3 درجات
};

void UserInputMark(AveragePassFail input[3]) {
    for (int i = 0; i < 3; i++) {
        cout << "Enter Your Marks for Student " << i+1 << ":\n";
        for (int j = 0; j < 3; j++) {
            cout << "Enter Mark " << j+1 << ": ";
            cin >> input[i].Mark[j];
        }
    }
}

int main() {
    AveragePassFail students[3];  // مصفوفة تحتوي على 3 طلاب
    UserInputMark(students);  // استدعاء دالة إدخال العلامات
    return 0;
}