#include<iostream>
using namespace std;

int main() {
    int rows;
    int columns;
    int sum = 0; 
    cout<<"Enter Rows: ";
    cin>>rows;
    cout<<"Enter Columns: ";
    cin>>columns;
    for(int x=1; x<=columns; x++){
        for(int y=1; y<=rows; y++) {
            cout<<y*x;
            sum = sum + (x*y);
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Maximum: "<<rows*columns<<endl;
    

}