#include <iostream>
using namespace std;


double Celsius(double);

int main()
{
    double  C;
    cout<<"================================="<<endl;
    cout<<"F\t\t\tC"<<endl;
    cout<<"---------------------------------"<<endl;
    for(double F=0;F<=20;F++){
        C = Celsius(F);
        cout<<F<<"\t\t\t"<<C<<endl;

    }
    return 0;
}

double Celsius(double num){
    return (5.0/9.0)*(num - 32.0);
}