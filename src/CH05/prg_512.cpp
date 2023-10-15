#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    int days;
    double total = 0.0;
    
    cout<<"For how many days do you have sales figures? ";
    cin>>days;

    while (days <=0)
    {
        cout<<"Days must be positive! \n";
        cout<<"How many days : ";
        cin>>days;
    }
    
    for (size_t i = 1; i < days; i++)
    {
        double sales;
        cout<<"Enter the sales for day "<<i<<": ";
        cin>>sales;
        total += sales;
    }

    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total sales are $"<<total<<endl;
    
   /* for(int count =1; count <= days; count++){
        double sales;
        cout<<"Enter the sales for day "<<count<<": ";
        cin>>sales;
        total += sales;
    }
    */
   
    return 0;
}