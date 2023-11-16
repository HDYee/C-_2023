
//파일 오픈 오류 다시 해보기 
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main(int argc, char *argv[])
{
    const int NUM_DIV = 3;
    const int NUM_QTR = 4;
    double sales[NUM_DIV][NUM_QTR];
    double totalsale = 0;

    int div, qtr;
    ifstream datafile;

    datafile.open("sales2.dat");
    if(!datafile)
        cout<<"Error opening data file\n";
    else{
        cout<<setprecision(2)<<showpoint<<fixed;

        cout<<"Quarterly Sales by Division\n\n";
        for (div= 0; div < NUM_DIV; div++)
        {
            for(qtr=0;qtr<NUM_QTR;qtr++){
                cout<<"Division "<<(div+1)<<", Quarter "<<(qtr+1)<<": $";
                datafile>>sales[div][qtr];
                cout<<sales[div][qtr]<<endl;
            }
            cout<<endl;
        }
        datafile.close();
        for (div= 0; div < NUM_DIV; div++)
        {
            for(qtr=0;qtr<NUM_QTR;qtr++){
                totalsale +=sales[div][qtr];
            }
            cout<<"Total sales for the company are : $";
            cout<<totalsale<<endl;
        }
        
    }

    
    return 0;
}