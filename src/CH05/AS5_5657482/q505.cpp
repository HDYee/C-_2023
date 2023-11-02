#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    float KPH, MPH;
    cout<<"==========================="<<endl;
    cout<<"KPH\t\tMPH";
    cout<<"\n---------------------------"<< endl;
    for(int i=40;i<=120;i+=5){
        KPH = i;
        MPH = KPH * 0.6214;
        cout<<KPH<<"\t\t"<<MPH<<endl;
    }
    cout<<"==========================="<<endl;
    return 0;
}