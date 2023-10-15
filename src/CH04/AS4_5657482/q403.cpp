#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int day, month, year;

    cout<<"Enter the month(in numeric form), day, year(two digit) : ";
    cin>>month>>day>>year;

   if (month*day == year)
   {
    cout<<"The date is a magic!\n";
   }
   else
   {
    cout<<"The date is not magic!\n";
   }
   
    return 0;
}