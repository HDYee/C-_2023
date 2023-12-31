#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    const double Pay_Rate = 50.0;
    const int MIN_HOURS = 5;
    double hours, charges;

    cout<<"How many hours were worked? ";
    cin>>hours;

    hours = hours < MIN_HOURS ? MIN_HOURS : hours;

    charges = Pay_Rate * hours;
    cout << fixed << showpoint <<setprecision(2)
         << "The charges are $ "<<charges <<endl;
    return 0;
}
