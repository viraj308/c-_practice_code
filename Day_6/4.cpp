#include<iostream>
using namespace std;

// 18, 21, 19, 23, 20

int main() {
    int measurements[5];
    int array_length = sizeof(measurements)/sizeof(measurements[0]);
    cout<<"Enter 5 measurement units: "<<endl;
    for(int x = 1; x<=array_length; x++){
        cin>>measurements[x];
    }
    cout<<endl;
    for(int y=1; y<=array_length;y++){
        cout<<measurements[y]<<endl;
    }

}