#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    const float CHARGE_PER_YEAR = 2500, INCREASE_PER_YEAR = 0.04;

    float fee = CHARGE_PER_YEAR;

    for(int i = 1; i <=6; i++)
    {
        cout << "Fee for year " << i << " = "<< fee<< endl;

        fee += (CHARGE_PER_YEAR * INCREASE_PER_YEAR);
    }

    return 0;
}