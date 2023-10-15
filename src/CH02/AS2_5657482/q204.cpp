#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float meal_coast,tax, tip,total_bill;
    meal_coast = 44.50;
    tax = meal_coast * 0.0675;
    tip = (meal_coast + tax)*0.15;
    total_bill = meal_coast + tax + tip;

    cout <<"meal coast : $"<<meal_coast,
    cout <<"\ntax : $"<<tax,
    cout <<"\ntip : $"<<tip,
    cout <<"\ntotal bill : $"<<total_bill<<endl;
    return 0;
}
