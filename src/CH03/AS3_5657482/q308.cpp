#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string Moviename;
    int Adult, Child ,Adult_total, Child_total;
    float gross, net, distributor; 

    cout<<"Enter movie name : ";
    getline(cin, Moviename);
    cout<<"Enter how many adult tickets were sold : ";
    cin>>Adult;
    cout<<"Enter how many child tickets were sold : ";
    cin>>Child;
    
    Adult_total = Adult * 6;
    Child_total = Child *3;
    gross = Adult_total + Child_total;
    net = gross * 0.2;
    distributor = gross -net;

    cout<<"Movie Name: "<<setw(10)<<"\""<<Moviename<<"\""<<endl;
    cout<<"Adult Tickets Sold : "<<setw(8)<<Adult<<endl;
    cout<<"Child Tickets Sold : "<<setw(8)<<Child<<endl;

    cout<<setprecision(2)<<fixed;
    cout<<"Gross Box Office Profit : "<<"$ "<<setw(3)<<gross<<endl;
    cout<<"Amount Paid to Distributor : "<<"-$ "<<setw(3)<<distributor<<endl;
    cout<<"Net Box Office Profit : "<<"$ "<<setw(3)<<net<<endl;

    return 0;
}