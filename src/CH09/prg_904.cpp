#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{  
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.01,0.1,0.25,0.5,10.0};
    double *dpointer = coins;
    cout<<"The array values using pointers \n";
    
    for(int i=0;i<NUM_COINS;i++){
        cout<<dpointer[i]<<" : ";
    }

    cout<<"The array values using array name \n";
    
    for(int i=0;i<NUM_COINS;i++){
        cout<<*(coins + i)<<" : ";
    }
    
    return 0;
}