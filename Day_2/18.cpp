#include<iostream>
using namespace std;

int main() {
    int bill = 1200;
    int pay = bill > 1000 ? bill - bill * 10 / 100 : bill;
    cout<<"Bill: "<<pay<<endl;
    return 0;

}