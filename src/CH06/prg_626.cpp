#include <iostream>

using namespace std;

int square(int);
double square(double);
//double이 있으면(여러 형태의 함수가 있다면) 파라미터에 따라서 맞는 함수 적용 
int main(int argc, char *argv[])
{
    int userint = 4;
    double userdouble =2.2;

    cout<<"Integer square of : "<<userint<<" is "<<square(userint)<<endl;
    cout<<"Double square of : "<<userdouble<<" is "<<square(userdouble);
    
    return 0;
}

int square(int num){return num*num;}

double square(double num){return num*num;}