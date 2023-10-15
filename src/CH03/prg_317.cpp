#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[])
{
    double day1, day2, day3, total;

    cout<<"Enter the sales for day 1 : ";
    cin>>day1;
    cout<<"Enter the sales for day 2 : ";
    cin>>day2;
    cout<<"Enter the sales for day 3 : ";
    cin>>day3;

    total = day1 + day2 + day3;

    cout<<"\nSales Figures\n";
    cout<<"----------------\n";
    cout<<setprecision(2)<<fixed; //이게 없으면 자리맞춰서 자름, 설정 값보다 소수점아래 수가 적으면 0 추가
    cout<<"Day 1:"<<setw(8)<<day1<<endl;
    cout<<"Day 2:"<<setw(8)<<day2<<endl;
    cout<<"Day 3:"<<setw(8)<<day3<<endl;
    cout<<"----------------\n";
    cout<<"total:"<<setw(8)<<total<<endl;

    return 0;
}
