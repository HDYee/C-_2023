#include <iostream>

using namespace std;

bool isEven(int);

int main(int argc, char *argv[])
{
    int val;

    cout<<"Enter an integer and I will tell you if it is even or odd : ";
    cin>>val;

    if(isEven(val))
        cout<<val<<" is even.\n";
    else
        cout<<val<<" is odd.\n";

    return 0;
}

bool isEven(int num){
    bool status;

    if(num%2 == 0)
        status = true;
    else
        status = false;
    
    return status;
}

//variable is a named storage 
//variable -> use the value of the contents inside the storage for ?? program 