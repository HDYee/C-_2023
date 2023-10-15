#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const double price = 99.0;
    int buy;
    double total_cost;

    cout<<"Enter the number of units purchased : ";
    cin>>buy;

   if (buy >=100)
    {
       total_cost = price * buy - price * buy * 0.5;
       cout<<"Total cost : $"<<total_cost<<endl;
    }
    else if (buy>=50 && buy < 100)
    {
        total_cost = price * buy - price * buy * 0.4;
        cout<<"Total cost : $"<<total_cost<<endl;
    }
    else if (buy>=20 && buy<50)
    {
        total_cost = price * buy - price * buy * 0.3;
        cout<<"Total cost : $"<<total_cost<<endl;
    }
    else if (buy>=10 && buy<20)
    {
        total_cost = price * buy - price * buy * 0.2;
        cout<<"Total cost : $"<<total_cost<<endl;
    }
    else if(buy>0 && buy<=9)
    {
        total_cost = price * buy;
        cout<<"Total cost : $"<<total_cost<<endl;
    }
    else{
        cout<<"You cannot enter a number less than 0.\n";
    }
    
    return 0;
}
