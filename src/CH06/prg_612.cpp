#include <iostream>

using namespace std;

int sum(int, int);

int main(int argc, char *argv[])
{
    int value1 = 20, value2 = 40, total;

    total = sum(value1, value2);
    cout<<"The sum of "<<value1<<" and "<<value2<<" is "<<total<<endl;
    
    return 0;
}

int sum(int arg1, int arg2){
    return arg1+arg2;
}