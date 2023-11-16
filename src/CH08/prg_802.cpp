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
    const int NUM_EMP = 3;
    PayRoll employees[NUM_EMP];

    cout << setprecision(2) << showpoint << fixed;
    
    for (int i = 0; i < NUM_EMP; i++)
    {
        cout << "Enter employee - " << i + 1 << " name : ";
        cin >> employees[i].name;

        cout << "Enter employee - " << i + 1 << " number : ";
        cin >> employees[i].empNum;

        cout << "Enter employee - " << i + 1 << " pay rate : ";
        cin >> employees[i].payRate;

        cout << "Enter employee - " << i + 1 << " worked hours : ";
        cin >> employees[i].hours;

        employees[i].grossPay = employees[i].payRate * employees[i].hours;
    }

    for (size_t i = 0; i < NUM_EMP; i++)
    {
        cout << "---------------------------------------" << endl;

        cout << "Employee - " << i + 1
             << " Name : " << employees[i].name << endl;

        cout << "Employee - " << i + 1
             << " Number : " << employees[i].empNum << endl;

        cout << "Employee - " << i + 1
             << " hours worked : " << employees[i].hours << endl;

        cout << "Employee - " << i + 1
             << " Pay rate : " << employees[i].payRate << endl;

        cout << "Employee - " << i + 1
             << " gross pay : " << employees[i].grossPay << endl;
    }

    /*cout << "Enter the employee's number : ";
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
*/

    return 0;
}
// array -> parallel array -> structure -> class