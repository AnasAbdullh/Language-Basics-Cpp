#include <iostream>

using namespace std;

struct strAveragePassFail
{
    int Mark[3];
};

void UserINputMark(strAveragePassFail input[3])

{
    cout << "Enter Your Mark 1\n";
    cin >> input[0].Mark[0];

    cout << "Enter your Mark 2\n";
    cin >> input[1].Mark[1];

    cout << "Enter your Mark 3\n";
    cin >> input[2].Mark[2];
    
}
int checkMark(strAveragePassFail check[3])
{
    int result = (check[0].Mark[0] + check[1].Mark[1] + check[2].Mark[2]) / 3;
    return result;
}

int main()

{
    strAveragePassFail result[3];
    UserINputMark(result);
    int sum = checkMark(result);

    if (sum >= 50)
    {
        cout << sum << endl;
        cout << "PASS" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}