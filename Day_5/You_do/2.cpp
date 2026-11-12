#include<iostream>
using namespace std;

int main(){
    int balance;
    int limit;
    int visit = 0;
    cout<<"Enter balance limit: ";
    cin>>balance;
    cout<<"Payment limit: ";
    cin>>limit;
    while(balance>0){
        cout<<balance<<endl;
        balance = balance - limit;
        visit++;

    }
    cout<<"Visit:"<<visit<<endl;
    
}