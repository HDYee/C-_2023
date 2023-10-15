#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int day = 86400, hour=3600, min=60;

    int  seconds;

    cout<<"Enter the seconds : ";
    cin>>seconds;

    if (seconds >= day)
    {
        cout<<seconds/day<<" days and "<<seconds%day<<" seconds."; 
    }
    else if (seconds < day && seconds >= hour)
    {
        cout<<seconds/hour<<" hours and "<<seconds%hour<<" seconds.";
    }
    else if(seconds <hour && seconds>=min)
    {
        cout<<seconds/min<<" minutes and "<<seconds%min<<" seconds.";
    }
    else if(seconds < min){
        cout<<seconds<<" is less than 60 seconds.";

    }
    
    
    return 0;
}
