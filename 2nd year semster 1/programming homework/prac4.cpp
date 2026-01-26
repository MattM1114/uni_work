#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void welcome();
double volume_box(double length,double width,double height);
bool check_prime(int num);
double convert_to_temp(double temp);
double convert_to_temp(int temp);
int roll_dice();
void multiplication_table(int n);
void show_user(string name);
void show_user(int age,string name);
int max(int n1,int n2,int n3);
char grade(double score);
double calc(double num1,double num2,char op);

int main(){
    int select;
    welcome();
    do {
        cout << "Please enter a number form 1 - 10" << endl;
        cout << "1 area of a cube" << endl;
        cout << "2 check if a number is prime" << endl;
        cout << "3 convert temperature" << endl;
        cout << "4 roll dice" << endl;
        cout << "5 multiplication table" << endl;
        cout << "6 print name and age" << endl;
        cout << "7 max of 3 numbers" << endl;
        cout << "8 grade" << endl;
        cout << "9 calculator" << endl;
        cout << "10 exit" << endl;
        cin >> select;
        if (select == 1){
            double length,width,height;
            cout << "enter the length of the cube" << endl;
            cin >> length;
            cout << "enter the width of the cube" << endl;
            cin >> width;
            cout << "enter the height of the cube"<< endl;
            cin >> height;
            double volume = volume_box(length,width,height);
            cout << "the volume of the cube is " << volume << endl;
            cout <<endl;
        }else if (select == 2)
        {
            int num;
            cout << "enter a number to check if it is prime" << endl;
            cin >> num;
            int prime = check_prime(num);
            if (prime == true){
            cout << "the number " << num << " is prime" << endl;
            }
            else{
            cout << "the number " << num << " is not prime" << endl;
            }
            cout <<endl;
        }else if (select == 3)
        {
            double temp1;
            int temp2;
            cout << "enter a temperature in celsius to convert to fentheight " << endl;
            cout << "enter a temperature in fentheight to  convert to celsius " << endl;
            cin >> temp1;
            cin >> temp2;
            double temp_f = convert_to_temp(temp1);
            double temp_c = convert_to_temp(temp2);
            cout << "the temperature in fahrenheit is " << temp_f << endl;
            cout << "the temperature in celsius is " << temp_c << endl;
            cout <<endl;
        }else if (select == 4)
        {
            int die = roll_dice();
            cout << "the dice rolled a " << die << endl;
            cout <<endl;
        }else if (select == 5){//task 5
            int n;
            cout << "enter a number to print the multiplication table" << endl;
            cin >> n;
            multiplication_table(n);
            cout <<endl;
        }else if (select == 6){
            cout << "enter a name to print" << endl;
            string name;
            cin >> name;
            show_user(name);
            cout << "enter a name and age to print" << endl;
            string name_;
            int age;
            cin >> name_ >> age;
            show_user(age,name_);
            cout <<endl;
        }else if (select == 7){
            int n1,n2,n3;
            cout << "enter three numbers to find the max" << endl;
            cin >> n1 >> n2 >> n3;
            int max_ = max(n1,n2,n3);
            cout << "the max is : " << max_ << endl;
            cout <<endl;
        }else if (select == 8)
        {
            double score;
            cout << "enter a score to get the grade" << endl;
            cin >> score;
            char grade_= grade(score);
            cout << "you got an : "<<grade_ <<endl;
            cout <<endl;
        }else if (select == 9)
        {
            double num1,num2;
            char op;
            cout << "enter two numbers and an operator to calculate" << endl;
            cin >> num1 >> num2 >> op;
            double calc_ = calc(num1,num2,op);
            cout << "the answer is " << calc_ << endl;
            cout <<endl;
        }
    }while (select < 10);

return 0;
}void welcome(){
    cout << "hello user" <<endl;
}
double volume_box(double length,double width,double height){
    double volume = length*width*height;
    return volume;
}
bool check_prime(int num){
    bool is_prime;
    for (int i=1;i<=num;i++){
        if (num%i==0){
            is_prime=false;
        }
        else
        {
            is_prime = true;
            break;
        }
    return is_prime;

    }
}
double convert_to_temp(double temp){
    double temp_f;
    temp_f =(temp*1.8)+32;
    return temp_f;
}
double convert_to_temp(int temp){
    double temp_c;
    temp_c = (temp-32)/1.8;
    return temp_c;

}
int roll_dice(){
    int die =rand()%6+1;
    return die;
}
void multiplication_table(int n){
    for (int i = 1;i<=10;i++){
        cout << i<<'*'<<n<<'='<<i*n<<endl;
    }
}
void show_user(string name){
    cout << name <<endl;
}

void show_user(int age,string name){
    cout << name << endl;
    cout << age << endl;
}int max(int n1,int n2,int n3){
    if(n1>n2 && n1>n3){
        return n1;
    }
    else if(n2>n1 && n2>n3){
        return n2;
    }
    else{
        return n3;
    }
}
char grade(double score){
    if(score>=90){
        return 'A';
    }
    else if(score>=80 && score<90){
        return 'B';
    }
    else if(score>=70 && score<80){
        return 'C';
    }
    else if(score>=60 && score<70){
        return 'D';
    }
    else if(score>=50 && score<60){
        return 'E';
    }
    else{
        return 'F';
    }
}
double calc(double num1,double num2,char op){
    if(op=='+'){
        return num1+num2;
    }
    else if(op=='-'){
        return num1-num2;
    }
    else if(op=='*'){
        return num1*num2;
    }
    else if(op=='/'){
        return num1/num2;
    }
    else{
        return 0;
    }
}




