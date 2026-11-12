#include<iostream>
using namespace std;

int main() {
    int target;
    int deposit;
    int week_counter = 1;
    int total;
    cout<<"Enter target: ";
    cin>>target;
    cout<<"Enter deposit: ";
    cin>>deposit;
    cout<<"Initial deposit: "<<deposit<<endl;
    do {
    
        total = total + deposit;
        deposit = deposit + 20;
        
    }while(deposit<target);

    cout<<"Deposit: "<<deposit<<endl;
    cout<<"Weeks: "<<week_counter<<endl;
}