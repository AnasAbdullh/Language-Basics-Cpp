#include <iostream>
using namespace std;

struct stPerson {
    enum Gender { Male, Female };
    enum MaritalStatus { Single, Married, Divorced };

    string FirstName;
    string LastName;
    Gender gender;
    MaritalStatus maritalStatus;
};

int main() {
    stPerson person1;

    person1.FirstName = "Ahmed";
    person1.LastName = "Ali";
    person1.gender = stPerson::Male;
    person1.maritalStatus = stPerson::Single;

    cout << "Name: " << person1.FirstName << " " << person1.LastName << endl;
    cout << "Gender: " << (person1.gender == stPerson::Male ? "Male" : "Female") << endl;
    cout << "Marital Status: " << (person1.maritalStatus == stPerson::Single ? "Single" : "Married") << endl;

    return 0;
}
