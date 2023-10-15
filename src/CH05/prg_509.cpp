#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int MIN_num = 1, MAX_num = 10;
    int num;

    cout<<"Number    Number Squared\n";
    cout<<"-------------------------\n";
    
    for(num = MIN_num; num<=MAX_num;num++)
        cout<<num<<"\t\t"<<(num*num)<<endl;
    return 0;
}