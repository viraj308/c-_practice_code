#include<iostream>
using namespace std;

int main(){
    int attendance[5];
    int num;
    int wed;

    cout << "Enter 5 attendance values: ";

    for(int x = 0; x < 5; x++){
        cin >> num;
        attendance[x] = num;
    }
    cout<<"Enter the correct wednesday attendance digit: ";
    cin>>wed;
    attendance[3] = wed;
    for(int x = 0; x < 5; x++){
        cout<<"Correct Attendance: "<<endl;
        for(int x = 0; x < 5; x++){
        cout<<attendance[x]<<" ";
    }
    }


    return 0;
}