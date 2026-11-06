#include<iostream>

using namespace std;

int main() {
    int number = 253;

int reversed =
    (number % 10) * 100 +
    ((number / 10) % 10) * 10 +
    ((number / 100) % 10);
    cout<<"The Token number is 253 and the reveresed version is: "<< reversed <<endl;
    return 0;
}