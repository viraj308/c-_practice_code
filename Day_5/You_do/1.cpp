#include<iostream>
using namespace std;

int main() {
    int num;
    int badges = 0;
    cout<<"Enter the number of guests: ";
    cin>>num;
    badges = num;
    for(int x=1; x<=num; x++){
        cout<<x<<endl;
    }
    
    cout<<"Badges: "<<badges<<endl;
}