#include <iostream>
#include <iomanip>
using namespace std;


int main(int argc, char *argv[])
{
    float F = 0;

    cout << "Celsius\t\tFahrenheit" << endl;
    cout << "======================================\n";

    cout << setprecision(1) << fixed;
    
    for (int C = 0; C <= 20; C++)
    {
   
        F = ((9.0 / 5) * C) + 32;
        cout << setw(2) << C << "\t\t" << F << endl;
    }
    cout << "======================================\n";
    return 0;
}