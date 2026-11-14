#include<iostream>
using namespace std;

int main(){
    int items[5] = {}
    
    cout<<"Enter five items numbers : ";
    for(int x=0; x<5; x++) {
        int num;
        cin>>num;
        items[x] = num;
    }
    for(int x=0; x<5; x++) {
        cout<<items[x]<<endl;
        
    }
    
}