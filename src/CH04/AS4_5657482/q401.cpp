#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x, y;
    cout<<"Enter the x :";
    cin>>x;
    cout<<"Enter the y :";
    cin>>y;

    cout<<"x";
    if(x == y){
        cout<<"=";
    }
    else if (x>y)
    {
       cout<<">";
    }
    else{
        cout<<"<";
    }
    
    cout<<"y";
    return 0;
}
