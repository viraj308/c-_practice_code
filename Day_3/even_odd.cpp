#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number to check whether it is even or odd: ";
    cin>>num;
    if(num%2==0) {
        cout<<"the number is even"<<endl;
    }
    else{
        cout<<"the number is odd"<<endl;
    }
}