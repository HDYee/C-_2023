#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char c;
    int i;
    float f;
    double d;

    cout<<"Size of char is "<<sizeof(c)<<" bytes.\n",
    cout<<"Size of int is "<<sizeof(i)<<" bytes.\n",
    cout<<"Size of float is "<<sizeof(f)<<" bytes.\n",
    cout<<"Size of double is "<<sizeof(d)<<" bytes.\n"<<endl;

    return 0;
}
