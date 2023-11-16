#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x = 25;
    int *ptr;

    ptr = &x;

    cout << "The value in x is " << x << endl;
    cout << "The address of x is " << ptr << endl;

    cout << "The value of x again is " << *ptr << endl;
    *ptr = 100;
    cout << "The changed value of x is " << *ptr << endl;
    cout << "The address of x is " << ptr << endl;
    cout << "The value in x is " << x << endl;
    return 0;
}