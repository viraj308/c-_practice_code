#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int quotients[10] = {};
    for(int x = 0; x<10; x++){
        int quotient = num%10;
        quotients[x] = quotient;
        if(quotient == 0){
            break;
        }
    }
    for(int y = 0; y<10; y++){
        cout<<quotients[y]<<endl;
    }
}