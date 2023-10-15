#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    int A_count, B_count, C_count;
    float A_total,B_total, C_total, total;

    cout<<"Enter the number of Class A seat tickets sold : ";
    cin>>A_count;
    cout<<"Enter the number of Class B seat tickets sold : ";
    cin>>B_count;
    cout<<"Enter the number of Class C seat tickets sold : ";
    cin>>C_count;

    A_total = A_count * 15;
    B_total = B_count * 12;
    C_total = C_count * 9;
    total = A_total + B_total + C_total;

    cout<<setprecision(2)<<fixed;
    cout<<"total income : $"<<total<<endl;


    return 0;
}
