#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string name;
    string city;

    cout <<"Please enter your name : ";
    getline(cin, name);
    //cin>>name;
    //cin을 쓰면 공백(or 내용)이 많아지면 그 다음 입력값을 못받음
    cout<<"Enter the city you live in : ";
    getline(cin, city);

    cout<<"Hello, "<<name<<endl;
    cout<<"You live in "<<city<<endl;
    return 0;
}
