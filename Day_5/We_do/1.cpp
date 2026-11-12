#include<iostream>
using namespace std;

int main(){
    int num;
    int total = 0;
    cout<<"Enter the number of sheets: ";
    cin>>num;
    for(int x=1; x<=num; x++){
        cout<<x*4<<endl;
        total = total + (x*4);

    }
    cout<<"Total: "<<total<<endl;
}