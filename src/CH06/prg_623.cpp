#include <iostream>

using namespace std;

void printstar (int=10, int=1);

int main(int argc, char *argv[])
{
    printstar();
    cout<<endl;
    printstar(5);
    cout<<endl;
    printstar(7,3);

    return 0;
}

void printstar(int col, int row){
    for(int down=0;down<row;down++){
        for(int down=0;down<col;down++){
            cout<<"*";
        }
        cout<<endl;
    }
}