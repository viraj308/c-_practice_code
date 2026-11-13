
#include <iostream>
using namespace std;

int main() {
    int delivery[6];

    cout << "Enter 6 delivery counts: ";

    for(int i = 0; i < 6; i++) {
        cin >> delivery[i];
    }

    cout << "First count: " << delivery[0] << endl;
    cout << "Last count: " << delivery[5] << endl;

    cout << "Reverse order: ";

    for(int i = 5; i >= 0; i--) {
        cout << delivery[i] << " ";
    }

    return 0;
}
