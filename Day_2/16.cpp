#include<iostream>
using namespace std;

int main(){
    int score = 40;
    int bonus = score++ + 5;
    int total = ++score * 2;
    cout<<"Bonus: "<<bonus<<"\nTotal: "<<total<<endl;
}