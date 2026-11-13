
#include <iostream>
using namespace std;

int main() {
    int scores[5] = {55, 72, 68, 91, 83};

    int index;
    int newScore;

    for(int test = 1; test <= 2; test++) {

        // Start with original array
        int scores[5] = {55, 72, 68, 91, 83};

        if(test == 1) {
            index = 2;
            newScore = 76;
        }
        else {
            index = 5;
            newScore = 60;
        }

        cout << "Test " << test << ": " << endl;

        if(index >= 0 && index < 5) {

            scores[index] = newScore;

            cout << "Updated array: ";

            for(int i = 0; i < 5; i++) {
                cout << scores[i] << " ";
            }

        }
        else {
            cout << "Invalid index";
        }

        cout << endl;
    }

    return 0;
}
