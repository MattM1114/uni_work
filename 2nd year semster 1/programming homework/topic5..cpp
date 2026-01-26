#include<iostream>
using namespace std;

double squared(double num);
double  maxium(double n1,double n2);

int main(){
     int num;
     do{
          cout << "Please enter a number between 0 and 1" <<endl;
          cin >> num;
          if (num==0){
               cout << "please enter the number you would like to square\n" <<endl;
               double num2;
               cin >> num2;
               cout << "The square of " << num2 << " is " << squared(num2) <<endl;
          }else if (num==1){
               cout << "please enter the two numbers you would like to compare\n" <<endl; 
               int n1,n2;
               cin >> n1 >> n2;
               cout << "The maximum of " << n1 << " and " << n2 << " is " << maxium(n1,n2) <<endl;
          }
     } while (num!=2);

     return 0;
}

double maxium(double n1,double n2){
          if (n2>n1){
               return n2;
          }
          else{
                    return n1;
          }
}

double squared(double n){
     double square;
     square= n * n;
     return square;
}
