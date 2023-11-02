#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    const int INCREASE_PAY = 2;

    int working_days;

    float daily_pay = 0.01,
          total_pay = 0;

    cout << "\nEnter number of days: ";
    cin >> working_days;
    while(working_days < 1)
    {
        cout << "Working days must be between 1 and 31 "<< endl;
        cin>>working_days;
    }

    cout << "\n  Day\t\t Pay" << endl;
    cout << "--------------------------------------\n";
    

    for(int i = 0; i < working_days; i++)
    {
        total_pay += daily_pay;
        cout << "   " << (i + 1) << " \t\t $"<< daily_pay << endl;
        daily_pay *= INCREASE_PAY;
    }

    cout << "Total salary for " << working_days;
    cout << " days = $" << total_pay << endl;
   
    return 0;
}