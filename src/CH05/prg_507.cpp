#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float score1, score2, score3;
    double average;
    char again;

    do
    {
        cout<<"Enter 3 score and i will average them : ";
        cin>>score1>>score2>>score3;

        average = (score1 + score2 + score3) / 3.0;
        cout<< "The average is "<< average << ".\n";

        cout<<"Do you want to average another set? (Y/N) ";
        cin>>again;
    } while (again == 'Y' || again =='y');
    return 0;
}