#include <iostream>

using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 7;

int main() {
    double food[NUM_MONKEYS][NUM_DAYS];

    for(int i = 0; i < NUM_MONKEYS; i++) {
        for(int j = 0; j < NUM_DAYS; j++) {
            cout << "Enter the Monkey #" << i+1 <<"'s "<< "Day" << j+1<<" : ";
            cin >> food[i][j];
        }
    }

    double totalFood = 0, minFood = food[0][0], maxFood = food[0][0];
    int minMonkey = 1, maxMonkey = 1;

    for(int i = 0; i < NUM_MONKEYS; i++) {
        for(int j = 0; j < NUM_DAYS; j++) {
            totalFood += food[i][j];
            if(food[i][j] < minFood) {
                minFood = food[i][j];
                minMonkey = i+1;
            }
            if(food[i][j] > maxFood) {
                maxFood = food[i][j];
                maxMonkey = i+1;
            }
        }
    }

    double avgFood = totalFood / (NUM_MONKEYS * NUM_DAYS);

    cout << "Average amount of food eaten per day by the whole family of monkeys : " << avgFood << endl;
    cout << "The least amount of food eaten during the week by any one monkey : #" << minMonkey <<" and " << minFood << "pounds" << endl;
    cout << "The greatest amount of food eaten during the week by any one monkey : #" << maxMonkey << " and " << maxFood << "pounds" << endl;

    return 0;
}
