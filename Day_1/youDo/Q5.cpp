
#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, c;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input";
    }
    else if (n == 1) {
        cout << a;
    }
    else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        cout << a;
    }

    return 0;
}
