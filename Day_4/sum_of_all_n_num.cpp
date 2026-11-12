#include<iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout<<"Enter a number till which you want the sum: ";
    cin>>n;
    for(int x = 0;x<=n;x++){
        sum = sum + x;

    }
    cout<<sum<<endl;
}