#include<iostream>

using namespace std;

int main() {
    int temp_cel = 37;
    // fahrenheit = C*9/5+32;
    float a = temp_cel*9/5+32;
    float b = temp_cel*9.0/5+32;
    cout<<"A: "<<a<<"\nB: "<<b <<endl;
    return 0;
}