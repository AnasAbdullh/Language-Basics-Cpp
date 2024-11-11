#include <iostream>

using namespace std;
void sumUntil()
{
    short num = 0;
    short sum = 0;

    while (!(num == -99))
    {

        cout << "Enter number\n";
        cin >> num;
        if (num = !-99)
        {
            sum += num;
        }
    }
    cout << sum << endl;
}
int main()

{
    sumUntil();
    cout << !-99 << endl;

    return 0;
}

// public
// static void main(String[] args)
// {
//     Scanner scan = new Scanner(System.in);
//     int i = 0;
//     while (true)
//     {
//         System.out.println("enter number");
//         int num = scan.nextInt();

//         if (num != -99)
//         {
//             i = i + num;
//         }
//         else if (num == -99)
//         {
//             System.out.println(i);
//             break;
//         }
//     }
