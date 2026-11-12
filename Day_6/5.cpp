#include<iostream>
using namespace std;

int main() {
    int num;
    int locker[5] = {14, 27, 31, 27, 42};
    int locker_length = sizeof(locker)/sizeof(locker[0]);
    cout<<"Enter the locker number you want: ";
    cin>>num;
    for(int x=0;x<=locker_length;x++){
        if(num==locker[x]){
            cout<<"locker found: "<<locker[x]<<" at index "<<x<<endl;
            break;
        }
        else{
            cout<<"locker not found."<<endl;
            break;
        }

    }
}