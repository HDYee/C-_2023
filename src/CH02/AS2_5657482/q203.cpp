#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float state_tax, county_tax,total_tax;
    int purchase_price;

    purchase_price = 52;
    state_tax = purchase_price*0.04;
    county_tax = purchase_price * 0.02;

    total_tax = state_tax + county_tax;

    cout<<"purchase  : $"<<purchase_price,
    cout<<"\nstate tax : $"<<state_tax,
    cout<<"\ncounty tax : $"<<county_tax,
    cout<<"\ntotal tax : $"<<total_tax<<endl;



    return 0;
}
