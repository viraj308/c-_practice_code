#include<iostream>
using namespace std;

int main(){
    int quizMarks[5] = {70, 45,90,60, 80};
    int one;
    int two;
    cout<<"Enter no of the submission for marks: "<<endl;
    cin>>one>>two;
    cout<<"Marks at "<<one<<" is "<<quizMarks[one-1]<<endl;
    cout<<"Marks at "<<two<<" is "<<quizMarks[two-1]<<endl;
}