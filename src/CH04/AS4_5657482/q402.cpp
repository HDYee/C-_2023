#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x;
    cout<<"Enter the number(1~10) : ";
    cin>>x;

    switch (x)
    {
    case 1:
        cout<<"I";
        break;
    case 2:
        cout<<"II";
        break;
    case 3:
        cout<<"III";
        break;
    case 4:
        cout<<"IV";
        break;
    case 5:
        cout<<"V";
        break;
    case 6:
        cout<<"VI";
        break;
    case 7:
        cout<<"VII";
        break;
    case 8:
        cout<<"VIII";
        break;
    case 9:
        cout<<"IX";
        break;
    case 10:
        cout<<"X";
        break;
    default:
        cout<<"Enter numbers between 1 and 10 only";
        break;
    } 
    return 0;
}