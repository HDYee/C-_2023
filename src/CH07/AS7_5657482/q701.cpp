#include <iostream>
using namespace std;

const int MAX_SCORES = 20;

int countPerfect(int [], int);

int main() {
    int scores[MAX_SCORES];
    int size = 0;

    cout << "Enter a score between 0 and 100. You can enter up to 20 and enter -1 if you want to finish " << endl;

    while(size < MAX_SCORES) {
        int score;
        cout<<"Enter the score "<<size+1<<" : ";
        cin >> score;

        if(score == -1)
            break;

        if(score >= 0 && score <= 100) {
            scores[size] = score;
            size++;
        } else {
            cout << "Score must be between 0 and 100." << endl;
        }
    }

    int perfectScores = countPerfect(scores, size);
    cout << "Perfect score : " << perfectScores << endl;

    return 0;
}

int countPerfect(int scores[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(scores[i] == 100)
            count++;
    }
    return count;
}