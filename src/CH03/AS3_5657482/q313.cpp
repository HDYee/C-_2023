#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

int main(int argc, char *argv[])
{
    string month;
    int year;
    float total, sales, county, state, total_tax;

    cout<<"Enter the month, the year, and the total amount collected : ";
    cin>>month>>year>>total;
    sales = total / 1.06;
    county = sales * 0.02;
    state = sales * 0.04;
    total_tax = county + state;
    

    cout<<setprecision(2)<<fixed;
    cout<<"Month : "<<month<<" "<<year<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Total Collected : "<<setw(6)<<"$"<<total<<endl;
    cout<<"Sales : "<<setw(16)<<"$"<<sales<<endl;
    cout<<"County Sales Tax : "<<setw(5)<<"$"<<county<<endl;
    cout<<"State Sales Tax : "<<setw(6)<<"$"<<state<<endl;
    cout<<"Total Sales Tax : "<<setw(6)<<"$"<<total_tax<<endl;
    
    return 0;
}
