#include<iostream>
using namespace std;

int main(){
    int log[6] = {41, 72, 15, 72, 60, 72};
    int value;
    int count = 0;
    cout<<"Enter a number to check if exists or not: ";
    cin>>value;
    for(int num=0; num<6; num++){
        if(value == log[num]) {
            cout<<"Indices: "<<num<<endl;
            count++;
        }
        else {
            cout<<"No matches found "<<count<<endl;
            break;
        }
    }
}