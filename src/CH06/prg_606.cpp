#include <iostream>

using namespace std;

void displayValue(int);

int main(int argc, char *argv[])
{
    cout<<"I am passing 5 to displayValue.\n";
    displayValue(5);
    cout<<"Now i am back in main.\n";

    return 0;
}

void displayValue(int number){
    cout<<"The value is "<<number<<endl;
}