#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double regularWages,basepayrate = 18.25,
           regularHours = 40.0,
           overtimeWages,overtimepayrate = 27.78,
           overtimeHours = 10,
           totalwages;

    regularWages = basepayrate * regularHours;
    overtimeWages = overtimepayrate * overtimeHours;
    totalwages = regularWages + overtimeWages;

    cout << "Wages for this week are $"<<totalwages<<endl;
    return 0;
}
