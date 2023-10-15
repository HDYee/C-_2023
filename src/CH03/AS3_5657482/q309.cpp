#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float pallet, total, widget_weight, widget_count;

    cout<<"Enter the weight of the pallet : ";
    cin>>pallet;
    cout<<"Enter total weight of the pallet : ";
    cin>>total;

    widget_weight = total - pallet;
    widget_count = widget_weight/9.2;

    cout<<"The number of widgets stacked on the pallet : "<<widget_count;

    return 0;
}
