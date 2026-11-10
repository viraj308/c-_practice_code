#include<iostream>
using namespace std;

int main() {
    int marks;
    int attendence;

    cout<<"Enter the marks: ";
    cin>>marks;
    cout<<"Enter the attnedence: ";
    cin>>attendence;

    if(attendence>90){
        marks = marks + 5;
        cout<<"Marks: "<<marks<<endl;
    }
    else {
        cout<<"Marks: "<<marks<<endl;
    }
}