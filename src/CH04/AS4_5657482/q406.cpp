#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const float ONE_DOLLAR = 1.00, PENNY = 0.01, NICKEL= 0.05, DIME= 0.10, QUARTER= 0.25;
    
    float pennies,nickels,dimes,quarters,total_coins;
    
    cout<<"Enter the the number of pennies, nickels, dimes, and quarters : ";
    cin>>pennies>>nickels>>dimes>>quarters;

    total_coins = PENNY * pennies + NICKEL * nickels + DIME * dimes + QUARTER * quarters;

    if(total_coins == ONE_DOLLAR){
        cout<<"Congratulations! You won the game.";
    }
    else if (total_coins > ONE_DOLLAR)
    {
        cout<<"Total coin is more than one dollar";
    }
    else if (total_coins < ONE_DOLLAR)
    {
        cout<<"Total coin is less than one dollar";
    }
    
    return 0;
}
