#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    const float RISING_PER_YEAR = 3.1; 

    float millimeters_each_year = 0;
    
    cout << "--------------------------------------------------\n";
    for (int i = 1; i <= 25; i++)
    {
        millimeters_each_year += RISING_PER_YEAR;
        cout << "Year " << i << ":    " << millimeters_each_year << endl;

    }
    cout << "--------------------------------------------------\n";

    return 0;
}