#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    char ascii;

    for (int i = 0; i <= 127; i++)
    {
        ascii = i;
        cout << ascii << " ";

        if (i % 16 == 0)
            cout << endl;
    }
    cout << endl;
    
    return 0;
}