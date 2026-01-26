#include<iostream>

using namespace std;

int main(){
    try{
        int age = -2;
        if (age < 0)
            throw "Age can't be less 0";

        cout << "age is " << age << endl;

    }catch(const char * msg){
        cerr<<"error:"<<msg <<endl;

    }


return 0;
}
