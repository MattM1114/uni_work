#include<iostream>
using namespace std;

class ques
{
private:

    int front,rear;
    int maxsize;
    string arr[10];
public:
    ques(){

        front =-1;
        rear =-1;
        maxsize = 10;

    }
    bool isfull(){
        return rear == maxsize -1;
    }
    bool isempty(){
        return (rear == -1 || front > rear);

    }
    void enqueue(string name){
        if (isfull()){
            cout<<"the que is full and we can't add to it. "<<endl;
        }
        if (front==-1)
        {
            front = 0;
        }
        
        arr[++rear]=name;
        cout << name << " added to the que!"<<endl;
    }
    void deque(){
        if (isempty()){
            cout << "the que is empty"<<endl;
        }
        cout <<"serving :"<< arr[front++] <<endl;
    }
    void display(){
        if (isempty()){
            cout << "the que is empty"<<endl;
        }
        cout<< "customer in que"<<endl;
        for (int i = front;i <= rear ;i++){
            cout<<arr[i]<<endl;
        }
    }
};
int main() {
int choice = 0;
ques line;
string name;

do
{        
    cout << "\n====== QUEUE MENU ======" << endl;
        cout << "1. Add customer" << endl;
        cout << "2. Serve customer" << endl;
        cout << "3. Display queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

switch (choice)
{
case 1:
    cout <<"enter customer name:";
    cin >> name;
    line.enqueue(name);
    break;

case 2:

    break;
    line.deque();
case 3:
    line.deque();
    break;
case 4:
    cout<<"good bye the progarm is closing"<<endl;
    break;
default:
    cout << "invalid choice. try again." << endl;

}
} while (choice != 4);



    return 0;
}
