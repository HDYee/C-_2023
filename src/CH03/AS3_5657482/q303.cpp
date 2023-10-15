#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int rent, utilities, phones, cable, month, annual;

    cout<<"Enter the monthly costs for each of the following housing related expenses\n";
    cout<<"rent or mortgage payment : ";
    cin>>rent;
    cout<<"utilities : ";
    cin>>utilities;
    cout<<"phones : ";
    cin>>phones;
    cout<<"cable : ";
    cin>>cable;
    month = rent + utilities + phones + cable;
    annual = month * 12;

    cout<<"The total monthly cost : $"<<month<<endl;
    cout<<"The total annual cost : $"<<annual<<endl;
    return 0;
}
