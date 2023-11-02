#include <iostream>

using namespace std;

void doubleNum(int &);
void cantDoubleNum(int);

int main(int argc, char *argv[])
{
    int value = 4;
    int num = 4;

    cout<<"In main, value is "<<value<<endl;
    doubleNum(value);
    cout<<"Now back in main. value is "<<value<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"In main, value is "<<num<<endl;
    cantDoubleNum(num);
    cout<<"Now the number in main is : "<<num<<endl;


    
    return 0;
}

void doubleNum(int &refV){
    refV *=2;
    //return이 없어도 값에 영향 줌 value랑 refV는 같은 메모리 사용
}

void cantDoubleNum(int valnum){
    valnum *=2;
}