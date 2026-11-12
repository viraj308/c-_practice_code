#include<iostream>
using namespace std;

int main() {
    int target;
    int population;
    int hour = 0;
    cout<<"Enter iniital population: ";
    cin>>population;
    cout<<"Enter target: ";
    cin>>target;
    while(population<target){
        population = population * 2;
        hour = hour + 1;
    }
    cout<<"Cells : "<<population<<endl;
    cout<<"Hours :"<<hour<<endl;
}