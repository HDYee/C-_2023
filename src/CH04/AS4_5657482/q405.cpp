#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int book, point;

    cout<<"Enter the number of books purchased this month : ";
    cin>>book;

    if (book == 0)
    {
        point = 0;
    }
    else if (book == 1)
    {
        point = 5;
    }
    else if (book == 2)
    {
        point = 15;
    }
    else if (book == 3)
    {
        point = 30;
    }
    else if (book>=4)
    {
        point = 60;
    }

    cout<<"The number of points awarded : "<<point<<endl;

    return 0;
}
