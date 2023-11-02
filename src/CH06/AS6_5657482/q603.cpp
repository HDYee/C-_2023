#include <iostream>

using namespace std;

double fallingDistance(double);
const double g = 9.8;

int main(int argc, char *argv[])
{
    double d;

    cout<<"================================="<<endl;
    cout<<"Time\t\t\tDistance"<<endl;
    cout<<"---------------------------------"<<endl;
    for(int t=0; t<11;t++){
        d = fallingDistance((double)t);
        cout<<t<<"\t\t\t"<<d<<endl;

    }
    
    return 0;
}

double fallingDistance(double t){
    return 0.5*g*t*t;
}