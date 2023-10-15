#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char employed, recentGrad;//F2 누르면 변수 이름 전체 변경 가능

    cout<<"Answer the following questions\n";
    cout<<"with either Y for Yes or N for No.\n";
    cout<<"Are you employed? ";
    cin>>employed;
    cout<<"Have you graduated from college in the past two years? ";
    cin>>recentGrad;

    if (employed == 'Y' && recentGrad == 'Y')
    {
       cout<<"You qualify for the special interest rate.\n";
    }
    else
    {
        cout<<"You must be employed and have graduated from recently\n";
        cout<<"to qualify for a loan\n";
    }    
    return 0;
}