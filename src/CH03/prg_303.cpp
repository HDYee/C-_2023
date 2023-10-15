#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int whole;
    double fractional;
    char letter;

    cout<<"Enter an integer, a double, and a character: ";
    cin>>whole>>fractional>>letter;
    cout<<"Whole number is: "<<whole<<endl;
    cout<<"Fractional number is: "<<fractional<<endl;
    cout<<"Letter is: "<<letter<<endl;

    return 0;
}
