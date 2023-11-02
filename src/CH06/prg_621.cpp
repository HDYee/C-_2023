#include <iostream>

using namespace std;

void showLocal();
void showStatic();


int main(int argc, char *argv[])
{
    for(int i=0;i<5;i++){
        showLocal();
        showStatic();
    }
  
    return 0;
}

void showLocal(){
    int localNum = 0;
    cout<<"localNum in showLocal : "<<localNum<<endl;
    localNum++;

}

void showStatic(){
    static int localNum = 0;
    cout<<"localNum in showStatic : "<<localNum<<endl;
    localNum++;
}

//same variable name != same memory location
//showLocal -> localnum(regular variable)/showStatic -> localnum(static variable) 
//2개는 이름은 같지만 메모리 위치는 다르다 다른 변수
//21, 22 둘 다 한거 