#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int speed,hours_traveled, distance = 0;

    cout << "What is the speed of the vehicle in mph? : ";
    cin >> speed;
    while((speed < 0))
    {
        cout << "Speed must be greater that 0. \n";
        cin>>speed;
    }

    cout << "How many hours has it traveled? : ";
    cin >> hours_traveled;
    while(hours_traveled < 1)
    {
        cout << "Hours traveled must be greater that 1. \n";
        cin>>hours_traveled;
        
    }

    cout << "Hour   Distance Traveled" << endl;
    cout << "------------------------" << endl;

    for(int i = 0; i < hours_traveled; i++)
    {
        distance += speed;
        cout << "   " << (i + 1) << "   " << distance<< endl;
    }

    
    return 0;
}