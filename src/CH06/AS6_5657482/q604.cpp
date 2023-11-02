#include <iostream>

using namespace std;
double kinetic_Energy(double, double);


int main(int argc, char *argv[])
{
    double m, v, KE;
    cout<<"Enter the object's mass(kg) : ";
    cin>>m;
    cout<<"Enter the object's velocity(m/s) : ";
    cin>>v;

    KE = kinetic_Energy(m,v);
    cout<<" Kinetic Energy : "<<KE<<"J";

    return 0;
}


double kinetic_Energy(double m, double v){

    return 0.5 * m * v * v;
}