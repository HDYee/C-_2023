#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int count;
    double fee;

    cout<<"Enter the number of checks written during the past month : ";
    cin>>count;

    if (count>=60)
    {
        fee = count * 0.04;
    }
    else if (count>=40 && count<60)
    {
        fee = count * 0.06;
    }
    else if (count>=20 && count<40)
    {
        fee = count * 0.08;
    }
    else if (count>=1 && count<20)
    {
        fee = count * 0.10;
    }
    else
    {
        cout<<"You can't enter a number less than 0.\n";
        return 0;
    }
    
    cout<<"The bank's fees for the month : $"<<fee+10<<endl;

    
    return 0;
}
