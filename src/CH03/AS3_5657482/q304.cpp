#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int cost, insurance; 
    cout<<"Enter the cost to replace the structure : $";
    cin>>cost;
    insurance = cost * 0.8;
    cout<<"The minimum amount of insurance : $"<<insurance<<endl;

    
    return 0;
}