#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream inputFile;
    ofstream outFile;
    string filename, F2 = "sqare.txt";//F2는 bin에
    int num;

    cout<<"Enter the filename : ";
    cin>>filename;

    inputFile.open(filename.c_str());
    outFile.open(F2.c_str());

    if(inputFile){

        while(inputFile >> num){
            cout<<num<<endl; //monitor
            outFile << num * num << endl; //F2
        }
        inputFile.close();
        outFile.close();
    }
    else{
        cout<<"Error opening the file.\n";
    }
   
    return 0;
}