#include <iostream>

using namespace std;


int main(int argc, char *argv[])
{
    const float CALORIES_BURNED_PER_MIN = 3.9;

    float calories_burned = 0;

    for (int i = 10; i <= 30; i += 5)
    {
        calories_burned = (i * CALORIES_BURNED_PER_MIN);

        cout << "After " << i<< " minutes = "<< calories_burned<< endl;
    }
    return 0;
}

