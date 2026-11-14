#include<iostream>
using namespace std;

int main() {
    int id[5];
    int num;
    int num2;
    bool isFound = false;
    for(int x = 0; x < 5; x++){
        cin>>num;
        id[x] = num;
    }
    cout<<"Enter a number to find: ";
    cin>>num2;
    for(int y = 0; y < 5; y++){
        if(num2 == id[y]){
            cout<<"Found at "<<id[y]<<endl;
            isFound = true;
        }
        
        
    }
    cout<<isFound;
    
}