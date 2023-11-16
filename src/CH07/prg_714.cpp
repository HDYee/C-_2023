#include <iostream>

using namespace std;

void showValue(int [], int);

int main(int argc, char *argv[])
{
    const int ARRAY_SIZE = 8;
    int numbers[ARRAY_SIZE] = {5,10,15,20,25,30,35,40};


    showValue(numbers, ARRAY_SIZE);

     for(int index =0;index <ARRAY_SIZE ; index++){
        cout<<numbers[index]<<"-";
    }
    
    return 0;
}

void showValue(int nums[], int size){
    for(int index =0;index <size ; index++){
        cout<<nums[index]<<" ";
        nums[index] *=2;
    }
    cout<<endl;
}
