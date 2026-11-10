#include<iostream>

using namespace std;

int main() {
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    if((age <= 0 || age <= 120) && age <= 18) {
        cout<<"you can't vote or invalid age"<<endl;
    }
    else {
        cout<<"you can vote"<<endl;
    }
}