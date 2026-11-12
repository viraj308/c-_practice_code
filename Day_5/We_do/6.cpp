#include<iostream>
using namespace std;

int main() {
    int ticket_no;
    cout<<"Enter the starting ticket number: ";
    cin>>ticket_no;
    do{
        cout<<ticket_no<<endl;
        ticket_no++;
    } while(ticket_no<10);
}