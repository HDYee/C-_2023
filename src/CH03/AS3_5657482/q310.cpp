#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int cookie_kcal, eat_cookie, total_kcal;

    cookie_kcal = (4 * 300)/40;
    cout<<"Enter the how many cookies they actually ate : ";
    cin>>eat_cookie;

    total_kcal = cookie_kcal * eat_cookie;
    cout<<"The calories from the cookies you ate :"<<total_kcal;
    
    return 0;
}