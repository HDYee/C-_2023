#include <iostream>
#include <string>

using namespace std;

string romanNumerals[21] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XI", "XII", 
                            "XIII", "XIV", "XV", "XVI", "XVII", "XVIII", "XIX", "XX"};

int main() {
    int num;

    cout << "Enter the number between 1 to 20, if you finish this program, enter the 0" << endl;

    while(true) {
        cin >> num;

        if(num == 0)
            break;

        if(num >= 1 && num <= 20) {
            cout << num << "'s roman numeral : " << romanNumerals[num-1] << endl;
        } else {
            cout << "Number must be between 1 to 20." << endl;
        }
    }

    return 0;
}
