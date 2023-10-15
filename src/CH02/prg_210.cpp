#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int checking;
    unsigned int miles;
    long days;

    checking = -20;
    miles = 4276;
    days = 189000;

    cout <<"We have made a long journey of "<<miles;
    cout <<" miles.\n";
    cout <<"Our checking account balance is "<<checking;
    cout <<"\nAbout "<< days <<" days ago columbus ";
    cout <<"stood on this spot.\n";
    cout << "Size of miles is : "<< sizeof(miles);

    return 0;
}
