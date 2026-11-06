#include<iostream>

using namespace std;

int main() {
    int math_score = 82;
    int science_score = 91;
    int english_score = 77;
    
    double avg1 = (math_score+science_score+english_score)/3;
    double avg2 = (math_score+science_score+english_score)/3.0;
    cout<<avg1<< endl<< avg2<<endl;

    return 0;
}