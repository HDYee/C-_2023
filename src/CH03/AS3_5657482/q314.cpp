#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float valued, tax,actual_value,annual_property_tax;
    cout<<"Enter the valued and tax rate :";
    cin>>valued>>tax;
    actual_value = valued * 0.6;
    annual_property_tax = actual_value * tax * 0.01;

    cout<<"Annual property tax is $"<<annual_property_tax;
    
    return 0;
}