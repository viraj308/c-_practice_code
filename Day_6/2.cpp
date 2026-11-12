#include<iostream>
using namespace std;

int main(){
    int week_attendance[5] = {28, 31, 26, 30, 29};
    int length = sizeof(week_attendance)/sizeof(week_attendance[0]);
    cout<<"weeks attendance list before revision: "<<endl;
    for(int x = 0; x<length; x++){
        cout<<week_attendance[x]<<" ";
    }
    cout<<endl;
    week_attendance[2] = 32;
    cout<<"weeks attendance list after revision: "<<endl;
    for(int x = 0; x<length; x++){
        cout<<week_attendance[x]<<" ";
    }
}