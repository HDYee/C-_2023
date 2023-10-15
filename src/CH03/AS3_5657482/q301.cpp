#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int gallon, miles, m_per_g;

    cout<<"Enter the number of gallons of gas the car can hold : ";
    cin>>gallon;
    cout<<"Enter the number of miles it can be driven on a full tank : ";
    cin>>miles;

    m_per_g = miles / gallon;

    cout<<"The number of miles per gallon is "<<m_per_g<<" miles"<<endl;


    return 0;
}
