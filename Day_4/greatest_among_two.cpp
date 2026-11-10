#include<iostream>
using namespace std;

int main() {
    int num_1, num_2, num_3;
    cout<<"Enter three numbers: ";
    cin>>num_1>>num_2>>num_3;
    cout<<num_1<<num_2<<num_3;
    if(num_1>num_2 && num_1>num_3) {
        cout<<"number 1 is the greatest"<<endl;
    }
    else if(num_2>num_1 && num_2>num_3) {
        cout<<"number 2 is the greatest"<<endl;
    }
    else {
        cout<<"number 3 is the greatest"<<endl;
    }
    return 0;
}