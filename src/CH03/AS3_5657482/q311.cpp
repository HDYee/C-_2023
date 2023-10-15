#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float F, C;

    cout<<"Enter the Celsius temperature : ";
    cin>>C;

    F = (9.0/5.0)*C+32;

    cout<<"Fahrenheit temperature is "<<F;
    return 0;
}
