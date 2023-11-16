#include <iostream>
#include <string>

using namespace std;

const int NUM_SALSAS = 5;

int main() {
    
    string salsaNames[NUM_SALSAS] = {"mild", "medium", "sweet", "hot", "zesty"};
    int salsaSales[NUM_SALSAS] = {0};

    for(int i = 0; i < NUM_SALSAS; i++) {
        cout << "Enter the sales of "<<salsaNames[i]<<" : ";
        cin >> salsaSales[i];
    }

    int totalSales = 0, maxSales = 0, minSales = salsaSales[0], maxIndex = 0, minIndex = 0;

    
    for(int i = 0; i < NUM_SALSAS; i++) {
        totalSales += salsaSales[i];
        if(salsaSales[i] > maxSales) {
            maxSales = salsaSales[i];
            maxIndex = i;
        }
        if(salsaSales[i] < minSales) {
            minSales = salsaSales[i];
            minIndex = i;
        }
    }

    cout << "\nSalsa Sales Report\n";
    cout << "----------------------\n";
    for(int i = 0; i < NUM_SALSAS; i++) {
        cout << salsaNames[i] << ": " << salsaSales[i] <<endl;
    }
    cout<<"----------------------\n";
    cout << "Total Sales : " << totalSales <<endl;
    cout << "Highest Selling : " << salsaNames[maxIndex] <<endl;
    cout << "Lowest Selling : " << salsaNames[minIndex] << endl;

    return 0;
}
