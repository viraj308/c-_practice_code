#include<iostream>
using namespace std;

int main(){
    int mark;
    int marks[5];
    cout<<"Enter marks of the 5 submission: ";
    for(int x=0; x<5; x++){
        cin>>marks[x];
    }
    cout<<marks[2]<<marks[4];
}
