#include <iostream>

using namespace std;

void anotherFunction();

int main(int argc, char *argv[])
{
    int num = 1;

    cout<<"In main, num is "<<num<<endl;
    anotherFunction();
    cout<<"Back in main, num is "<<num<<endl;
        
    return 0;
}

void anotherFunction(){
    int num = 20;
    
    cout<<"In anotherFuntion, num is "<<num<<endl;
}