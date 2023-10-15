#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int modelNum;

    cout<<"Our TVs come in three models : \n";
    cout <<"The 1, 2, and 3. Which do you want? ";
    cin>>modelNum;

    cout<<"That model has the following features : \n";
    switch (modelNum)
    {
    case 3:
        cout<<"\tPicture-in-a-picture.\n";
    case 2:
        cout<<"\tStereo sound.\n";    
    case 1:
        cout<<"\tRemote control.\n";
        break;
    default:
        cout<<"You can only choose the 1, 2, or 3.\n";
            
    }
   return 0;
}
