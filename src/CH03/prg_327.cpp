#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    double length, width, height, volume, cost, charge, profit;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    volume = length *width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    cout << "-----------------------------------------------\n";
    cout << "The volume of the crate is ";
    cout << setw(8) << volume << " cubic feet.\n";
    cout << "Cost to build :" <<setw(8) << cost << endl;
    cout << "Charge to customer :" <<setw(8) <<  charge << endl;
    cout << "Profit :" <<setw(8) <<  profit << endl;
    
    return 0;
}
