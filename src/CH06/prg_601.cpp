#include <iostream>

using namespace std;

void displayMessage()
{
    cout<<"Hello from the fuction displayMessage.\n";
}

int main(int argc, char *argv[])
{
    cout<<"Hello from the main.\n";
    displayMessage();
    cout<<"Hello from an old friend again.\n";
   // cout<<"Back in function main again.\n";

    return 0;
}