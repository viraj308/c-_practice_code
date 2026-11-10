#include<iostream>
using namespace std;

int main() {
    int num;

    cout<<"Enter the posivite number to add: ";
    cin>>num;

    if(num>0){
        num = num+1;
        cout<<"Sum: "<<num;
        
    }
    else{
        cout<<"Enter a posivite number";
    }
}