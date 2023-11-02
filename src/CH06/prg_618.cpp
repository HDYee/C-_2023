#include <iostream>
#include <iomanip>
using namespace std;

const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.0;
const double OT_MULTIPLIER = 1.5;

double get_basepay(double);
double get_overtimepay(double);

int main(int argc, char *argv[])
{
   double hours, basepay, overtimepay, total;

   cout<<"How many hours did you work?";
   cin>>hours;

   basepay = get_basepay(hours);

   if(hours>BASE_HOURS)
    overtimepay = get_overtimepay(hours);

    total = basepay + overtimepay;

    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Base pay     $"<<setw(7)<<basepay<<endl;
    cout<<"Overtime pay $"<<setw(7)<<overtimepay<<endl;
    cout<<"Total pay    $"<<setw(7)<<total<<endl;

    return 0;
}

double get_basepay(double hours){
    double basepay;

    if(hours>BASE_HOURS)
        basepay = BASE_HOURS * PAY_RATE;
    else 
        basepay = hours * PAY_RATE;

    return basepay;
}

double get_overtimepay(double hours){
    double overtime;

    if(hours>BASE_HOURS){
        overtime = (hours - BASE_HOURS)*PAY_RATE * OT_MULTIPLIER;
    }
    else
        overtime = 0.0;

    return overtime;
}

//variable -> local/global
//function -> return statement prototype prameter 
//control flow -> if/else
//I/O -> cin cout
//setw, fixed
//operator -> + - ...

