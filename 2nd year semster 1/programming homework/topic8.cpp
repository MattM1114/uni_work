//skeleton code
// get score void function
//  printGrade void function

#include <iostream>
using namespace std;
void getscore(double &score);
void printGrade(double score);

int main(){

    double s;
    getscore(s);


    printGrade(s);

}

void getscore(double &score){
    cout <<"please enter your score " << endl;
    cin >>score;
    cout<<score<<endl;
}

void printGrade(double score){
    if(score >= 80){
    cout << "you got an A welldone" <<endl;
} else if (score >= 70 && score <= 80)
{
    cout << "you got an B" <<endl;
} else if (score >= 60 && score <= 70)
{
    cout << "you got an C" <<endl;
} else if (score >= 50 && score <= 60)
{
    cout << "you got an D" <<endl;
}
else
{
    cout << "you got an F you failed" <<endl;
}
}

