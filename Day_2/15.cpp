
#include <iostream>

using namespace std;

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    total_seconds = 34600;

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    return 0;
}
