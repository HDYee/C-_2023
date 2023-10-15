#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int height, width, area;

    cout<<"This program calculates the area of a rectangle.\n";
    cout <<"What is the width : ";
    cin>>width;
    cout <<"\nWhat is the height : ";
    cin>>height;

    area = height * width;
    cout<<"\nThe area of the rectangle is "<<area<<".\n";

    return 0;
}
