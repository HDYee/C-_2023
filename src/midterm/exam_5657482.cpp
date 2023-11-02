#include <iostream>

using namespace std;

double getSales();
void findHighest(double, double, double, double);

int main(int argc, char *argv[])
{
    double Northeast, Southeast, Northwest, Southwest;
    
    cout<<"Enter the quarterly sales";
    cout<<"Northeast : ";
    Northeast = getSales();
    cout<<"Southeast : ";
    Southeast = getSales();
    cout<<"Northwest : ";
    Northwest = getSales();
    cout<<"Northwest : ";
    Northwest = getSales();

    findHighest(Northeast, Southeast, Northwest, Northwest);

    
    return 0;
}

double getSales(){
    double sales;
    cin>>sales;

    if(sales>0)
        return sales;
    else
        cout<<"You can't input under 0";


}

void findHighest(double num1, double num2, double num3, double num4){
    int max = 0;
    while(int i = 0)
}