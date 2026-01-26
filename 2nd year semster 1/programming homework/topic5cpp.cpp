#include <iostream>
using namespace std;

int main(){


 double nums[6];

 cout << "please enter the number the array"<< endl;
 for(int i =0; i < 6; i++){
    cin >>nums[i];
 }

 double num;
 num = nums[2] *2;
 cout << "the third number doubled is "<< num<< endl;
 nums[2] = num;
 for (int i = 0;i <6;i++){
    cout<< nums[i]<< " ";
 }
 cout <<endl;

 double num2;
 num2 = nums[4] + 3.14159265359;
 cout << "the fith number  with pi added is :"<< num2<< endl;
 nums[4]= static_cast<int>(num2);

 cout <<"the new array is "<<endl;
  for (int i = 0;i <6;i++){
    cout<< nums[i]<< " ";
 }
 cout <<endl;



return 0;
}
