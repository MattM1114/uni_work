#include <iostream>
#include <string>
using namespace std;

int main(){
    int mark1,mark2,mark3,mark4,mark5;
    string grade;

    cout << "please enter the five marks for the year after each one press enter :"<<endl;
    cin >> mark1;
    cin >> mark2;
    cin >> mark3;
    cin >> mark4;
    cin >> mark5;
    int marks = mark1+mark2+mark3+mark5+mark4;
    double avg_marks = marks/5;
    if (avg_marks >= 80){
            grade = "A";
    }
    else if(avg_marks <=79 && avg_marks >=70 ){
        grade = "B";
    }
    else if (avg_marks < 70 && avg_marks >60){
        grade = "C"
    }
    else if (avg_marks<=59 && avg_marks >= 50){
        grade = "D";
    }
    else if (avg_marks <= 50){
        grade = "F";
    }
    cout << "your average mark was "<<avg_marks<<" and your average grade was "<< grade <<"."<<endl;

}
