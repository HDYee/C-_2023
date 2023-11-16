#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll
{
    int empNum;
    string name;
    double hours;
    double payRate;
    double grossPay;
};

int main(int argc, char *argv[])
{
    PayRoll employee;

    cout << "Enter the employee's number : ";
    cin >> employee.empNum;

    cout << "Enter the employee's name : ";
    cin.ignore();
    getline(cin, employee.name);

    cout << "How many hours did the employee work? : ";
    cin >> employee.hours;

    cout << "What is the employee's hourly payRate? : ";
    cin >> employee.payRate;

    employee.grossPay = employee.hours * employee.payRate;

    cout << "=== Here is the employee's payroll data ===" << endl;
    cout << "Name : " << employee.name << endl;
    cout << "Number : " << employee.empNum << endl;
    cout << "Hours worked : " << employee.hours << endl;
    cout << "Hourly payRate : " << employee.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross Pay : $" << employee.grossPay << endl;

    return 0;
}
//array -> parallel array -> structure -> class