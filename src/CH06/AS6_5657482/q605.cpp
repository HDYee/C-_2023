#include <iostream>
#include <string>
using namespace std;

const string NE = "North East",NW = "North West",
             SE = "South East", SW = "South West";

double inputValidate(double);
double getSales(string);
void findHighest(double, double, double, double);
void checkIfHighest(double, double, double, double, string);

int main() 
{
    double NE_sales,NW_sales,SE_sales,SW_sales;
           
    NE_sales = getSales(NE);
    NW_sales = getSales(NW);
    SE_sales = getSales(SE);
    SW_sales = getSales(SW);

    findHighest(NE_sales, NW_sales, SE_sales, SW_sales);

    return 0;
}

double getSales(string division)
{
    double sales;
    cout << "Enter the quarterly sales figure for " << division << "? : $";
    cin>>sales;
    while(sales<0){
        cout<<"Error! quarterly sales figure must be over 0."<<endl;
        cout << "Enter the quarterly sales figure for " << division << "? : $";
        cin>>sales;
    }
    cout << endl;
    return sales;
}

void findHighest(double NE_sales,double NW_sales,double SE_sales, double SW_sales)
{
    cout << "The highest grossing division is";

    checkIfHighest(NE_sales, NW_sales, SE_sales, SW_sales, NE);
    checkIfHighest(NW_sales, NE_sales, SE_sales, SW_sales, NW);
    checkIfHighest(SE_sales, NE_sales, NW_sales, SW_sales, SE);
    checkIfHighest(SW_sales, NE_sales, NW_sales, SE_sales, SW);
  
    cout << endl << endl;
}

void checkIfHighest(double sales1,double sales2, double sales3, double sales4,string division)
{
   if (sales1 > sales2 && sales1 > sales3 && sales1>sales4)
   {
                cout << division << " with a sales figure at: $" << sales1;
            }
       }          
   