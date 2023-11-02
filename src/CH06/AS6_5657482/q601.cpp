#include <iostream>

using namespace std;

double calculateRetail(double, double);

int main(int argc, char *argv[])
{
    double  retail_price,wholesale_cost, markup_per;

    cout<<"Enter the wholesale cost :";
    cin>>wholesale_cost;
    cout<<"Enter theh markup percent :";
    cin>>markup_per;
    while(wholesale_cost<0 || markup_per<0 || markup_per>100 ){
        cout<<"You can't enter the number under the 0"<<endl;
        cout<<"Enter the wholesale cost :";
        cin>>wholesale_cost;
        cout<<"Enter theh markup percent :";
        cin>>markup_per;
    }
    cout<<"Markup percentage : "<<markup_per<<"%"<<endl;
    markup_per = markup_per * 0.01;
    cout<<"Wholesale cost : $"<<wholesale_cost<<endl;
    retail_price = calculateRetail(wholesale_cost, markup_per);
 
    cout<<"Retail price : $"<<retail_price;

    
    return 0;
}

double calculateRetail(double num1, double num2){
    double retail;

    
    retail = num1 + (num1*num2);

    return retail;
}