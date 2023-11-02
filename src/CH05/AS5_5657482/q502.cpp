#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    int num, total = 0;

    cout << "Enter a positive number: ";
    cin >> num;

    while (num < 0)
    {
        cout << "You should enter the positive number.\n";
        cout << "Enter a positive number: ";
        cin >> num; 
    }

    for (int i = 1; i <= num; i++)
    {
        total += i;
        cout << total << endl;
    }

    cout << "Total = " << total;

    return 0;
}