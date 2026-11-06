#include<iostream>

using namespace std;

int main() {
    int age = 17;
    bool hasLicense = true;
    if(age>=18&&hasLicense) {
        cout<<"He can ride bike"<<endl;

    } 
    else {
        cout<<"He cannot ride bike"<<endl;
    }
    return 0;
}