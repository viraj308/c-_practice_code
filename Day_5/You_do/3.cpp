#include<iostream>
using namespace std;

int main() {
    int row_count;
    int column_count;
    int border = 0;
    cout<<"Enter row count: ";
    cin>>row_count;
    cout<<"Enter column count: ";
    cin>>column_count;
    for(int x=1; x<=column_count;x++){
        for(int y=1; y<=row_count; y++){
            if((x>1 && x<row_count) && (y>1 && y<row_count)){
                cout<<"0";
            }
            else{
                cout<<"X";
                border++;
            }
        }
        
        cout<<endl;
    }
    cout<<"Border Count: "<<border<<endl;
}