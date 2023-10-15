#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int choice;
    float r, PI=3.14159, w, l, h,  area;

    cout<<"Geometry Calculator\n\n";
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cout<<"Enter your choice (1-4): ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Enter the radius : ";
        cin>>r;
        area = r * r * PI;
        cout<<"Area of Circle : "<<area;
        break;
    case 2:
        cout<<"Enter the length and width : ";
        cin >> l>>w;
        area = l * w;
        cout<<"Area of Rectangle :"<<area;
        break;
    case 3:
        cout<<"Enter the length and height : ";
        cin >>l>>h;
        area = (l * h)/2;
        cout<<"Area of Triangle :"<<area;
        break;
    case 4:
        break;
    default:
        cout<<"Enter only the numbers on the menu, do it again.";
        break;
        
    }
    return 0;
}
