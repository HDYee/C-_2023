#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    float score1=50, score2, score3, score4, score5,avg;

    cout<<"Enter the score1 : ";
    cin>>score1;
    cout<<"Enter the score2 : ";
    cin>>score2;
    cout<<"Enter the score3 : ";
    cin>>score3;
    cout<<"Enter the score4 : ";
    cin>>score4;
    cout<<"Enter the score5 : ";
    cin>>score5;

    avg = (score1 + score2 + score3 + score4 + score5)/5;
    cout<<setprecision(1)<<fixed;
    cout<<"Average test score : "<<avg;
    
    return 0;
}