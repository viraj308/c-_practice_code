#include<iostream>
using namespace std;

int main() {
    int x;
    cout<<"Enter a number till which I will print table: ";
    cin>>x;
    for(int y = 1; y<=x;y++){
        for(int a = 1;a<=10;a++){
            cout<<y<<"*"<<a<<"="<<y*a<<endl;
        }
        cout<<endl;
    }
}