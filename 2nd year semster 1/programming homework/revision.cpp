# include <iostream>

using namespace std;

/*
int add(double num1, double num2);
int add(int num3,int num4);
int add();
*/

int main()
{
    /* int  store numbers without decimals
    double store numbers with decimals
    char store single characters
    bool store true or false
    tring store words
    storing a number
    int age;
    storing a word
    string name;
    assigning a value to a variable
    age = 25;
    name = "Matt";
    double store numbers with decimals
    double num1;
    num1=4.6
    char store single characters
    char grade;
    grade = 'A';
    bool store true or false
    bool flag= true;
     this is 1st way of storing a variable */

    /*int age;
    string name;
    cout <<" please enter your name ?" <<endl;
    cin >> name;
    cout << "how old are you? "<<endl<<"Be honest !" <<endl;
    cin >> age;
    cout << "your name is "<<name<<" and your age is "<<age<<" "<<endl;
    this is 2nd way of storing a variable*/
    /*
    int age;
    string citizen;


    cout << "please enter your age ";
    cin>> age;
    cout << "are you a citizen of south africa";
    cin>> citizen;
    if (age > 18 && citizen == "yes") {
        cout << "you are eligible to vote";
    }
    else {
        cout << "you are not eligible to vote"<<endl;
    }

    this is a logic statement 
    */
/*
    int i ;

    while (i<10)
    {
        i++
        
        cout << i << endl;
    }
        while loop
    */

    /*
    int i = 1;
    do{
        cout << i << endl;
        i++;
    }
    while (i<10);
    do while loop
    */
    /*
    int num, sum = 0;

    cout << "enter a number -1 to stop" << endl;
    while (num != -1)
    {
        cin >> num;
        sum += num;
    }
    cout << "the sum is "
    << sum << endl;
    sentinel  controlled loop
    */
    /*
    int num, sum = 0,

    cout << "enter a number" << endl;
    cin >> num;
    for (int i = 0; i < num;i++;)
    {
        
        sum += num;
    }
    cout << "the sum is "<< sum << endl;
    for loop
    */












    return 0;
}
/*
int add(double num1, double num2){
    return num1 + num2;
}
passing value  to a function way 1 this is the safe way
int add(int &num3,int num4){
    return num1 + num2;
}
passing value to a function way 2 this is the unsafe way but it is faster and sometimes it is needed
int add(){
    int num1, num2;
    cout << "enter 2 numbers" << endl;
    cin >> num1 >> num2;
    return num1 + num2;
}
passing value to a function way 3 this is the safe way but it is slower and needs a user input

*/