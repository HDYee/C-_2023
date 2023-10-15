#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    string month1, month2, month3;
    float rain_month1, rain_month2, rain_month3, average;

    cout<<"Enter the first month and amount of rain(in inches): ";
    cin >> month1>>rain_month1;
    cout<<"Enter the second month and amount of rain(in inches): ";
    cin >> month2>>rain_month2;
    cout<<"Enter the third month and amount of rain(in inches): ";
    cin >> month3>>rain_month3;
    
    cout<<setprecision(2)<<fixed;
    average = (rain_month1 + rain_month2 + rain_month3)/3;
    cout<<"The average monthly rainfall for " 
    <<month1<<", "<<month2<<", and "<<month3<<"was "<<average<<" inches.";
    return 0;
}