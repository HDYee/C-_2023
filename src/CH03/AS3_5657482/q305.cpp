#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    float bat, hit, avg;
    cout<<"The number of times the player was at bat : ";
    cin>>bat;
    cout<<"The number of hits : ";
    cin >> hit;
    cout<<setprecision(4)<<fixed;
    avg = hit / bat;
    cout<<"Player's batting average : "<<avg;
    return 0;
}