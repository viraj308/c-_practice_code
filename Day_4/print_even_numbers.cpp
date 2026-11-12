#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number till which we will print even numbers: ";
    cin>>n;
    for(int x = 0;x<=n;x++){
        if(x%2!=0){
            cout<<x<<endl;
        }
    }
}