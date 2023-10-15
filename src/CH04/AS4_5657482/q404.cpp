#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int length1, width1, area1, length2, width2, area2;

    cout<<"Enter the the length and width of first rectangles : ";
    cin>>length1>>width1;
    cout<<"Enter the the length and width of second rectangles : ";
    cin>>length2>>width2;

    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if (area1>area2)
    {
        cout<<"The area of the first triangle is larger.";
    }
    else if(area2>area1)
    {
        cout<<"The area of the second triangle is larger.";
    }
    else if(area1 == area2)
    {
        cout<<"The areas are the same.";
    }

    return 0;
}
