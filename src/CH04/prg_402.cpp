#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    int score1, score2, score3;
    double average;

    cout<<"Enter 3 test scores separated by space :";
    cin>>score1>>score2>>score3;

    average = (score1+score2+score3) / 3.0;
    cout <<setprecision(2) <<fixed << showpoint ;
    cout << "Your average is "<<average <<endl;

    if(average >95.0)
    { 
        cout<<"Congratulations! That's a high score!\n";
    }
    
    return 0;
}