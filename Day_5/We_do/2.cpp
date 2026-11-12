#include<iostream>
using namespace std;

int main() {
    int num;
    int odd_squares = 0;
    int even_count = 0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int x=1;x<=num;x++){
        if(x%2==0) {
            ++even_count;
        }
        else{
            odd_squares = odd_squares + (x*x);
        }
    }
    cout<<"Odd Squares: "<<odd_squares<<endl;
    cout<<"Even_Count: "<<even_count<<endl;
}