#include<iostream>
using namespace std;

int main() {
    int num;
    //int final_digit;
    int rounds= 0;
    int product = 1;
    cout<<"Enter a starting number between 9 and 100: ";
    cin>>num;
    while(num>9){
        
    int units = num % 10;
    int tens = num / 10;
    product = units * tens;
    num = product;
    rounds++;
    

    

    }
    cout<<"Rounds: "<<rounds<<endl;
    cout<<"Final digit: "<<num<<endl;
    
}