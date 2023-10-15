#include <iostream>
#include <iomanip>
#include<cstdlib> //rand(), srand()
#include<ctime>
using namespace std;

int main(int argc, char *argv[])
{
    unsigned seed = time(0);
    srand(seed);

    int rand1, rand2,ans;

    rand1 = rand() % 41+10;
    rand2 = rand() % 41+10;
    
    cout<<setw(3)<<rand1<<endl;
    cout<<"+"<<rand2<<endl;
    cout<<"--------------"<<endl;
    cin>>ans;

    if(ans == (rand1+rand2)){
        cout<<"congraturation!";
    }
    else{
        cout<<"Wrong answer. The answer is "<<rand1+rand2;
    }

    return 0;
}