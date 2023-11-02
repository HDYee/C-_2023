#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


int main(int argc, char *argv[])
{
    const int NUM_OFFICES = 12;
    ifstream dataIn;
    int office;
    double sales[NUM_OFFICES], totalsales = 0.0, averagesales, highestsales, lowestsales;

    dataIn.open("sales.dat");
    if(!dataIn)
        cout<<"Error opening data file.\n";
    else{
        for(office = 0;office<NUM_OFFICES;office++)
            dataIn>>sales[office];
        dataIn.close();

        for(office = 0;office<NUM_OFFICES;office++)
            totalsales += sales[office];

        averagesales = totalsales/NUM_OFFICES;

        highestsales = lowestsales = sales[0];
        for(office = 1;office<NUM_OFFICES;office++){
            if(sales[office]>highestsales)
                highestsales = sales[office];
            else if(sales[office]<lowestsales)
                lowestsales = sales[office];

        }

        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"Total sales  $"<<setw(9)<<totalsales<<endl;
        cout<<"Average sales  $"<<setw(9)<<averagesales<<endl;
        cout<<"Highest sales  $"<<setw(9)<<highestsales<<endl;
        cout<<"Lowest sales  $"<<setw(9)<<lowestsales<<endl;
    }
    return 0;
}