#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;


int main(int argc, char *argv[])
{
    const int MIN = 1, MAX = 100;

    int randnum,user_num;

    unsigned seed = time(0);

    srand(seed);

    randnum = (rand() %(MAX - MIN + 1)) + MIN;
    
    cout << "Guess a number between 1 and 100." << endl;
    cin >> user_num;

    while (user_num != randnum)
    {
        cout << (user_num < randnum ? "Too lower." : "Too higher.")<<"Try again: ";
        cin >> user_num;
    }
    
    cout << "Congratulations. You figured out my number." << endl;
    cout << "Random number = " << randnum << endl;
    cout << "Your guess    = " << user_num   << endl;

    return 0;
}