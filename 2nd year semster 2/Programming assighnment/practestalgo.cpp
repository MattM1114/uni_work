#include <iostream>
using namespace std;
class Queue
{
private:
    /* data */
    int front,rear, size;;
    int* queue;
public:
    Queue(int size){
        this->size = size;
        queue = new int[size];
        front = 0;
        rear = -1;

    }

    ~Queue(){
        delete[] queue;
        cout << "Destructor called and que destroyed." << endl;
    }
    void enqueue(int val){
        if (rear == size - 1) {
            cout<<"queue is full"<<endl;
            return;
        }
        queue[++rear] = val;
        cout << "Element inserted: "<<val<< endl;
        
    }

    void dequeue(){

        if (isEmpty()) {
            cout << "the queue is empty"<<endl;
            return ;

        }
        cout << "Element deleted: "<<queue[front]<< endl;
        front++;

        if (front > rear) {
            front = 0;
            rear = -1;
        }
    }

    void display(){
        if (isEmpty()) {
            cout << "the queue is empty"<<endl;
            return;
    }
    cout << "Elements in the queue are: ";
    for (int i=front;i<=rear;i++){

        cout<<queue[i]<<" ";
    }
    cout << endl;
    }
    bool isEmpty(){

        return rear < front;
    }



};




int main () {
    int s;
    cout<<"Enter the size of queue: "<<endl;
    cin>>s;

    Queue q(s);
    cout <<endl;
    
    cout <<"Enter the elements in the queue"<<endl;

    int x;
    for (auto i=0;i<s;i++){
        cin >>x;
        q.enqueue(x);
    }
    q.display();
    
    cout<<"enter the element to be deleted "<< endl;

    q.dequeue();
    q.display();

    return 0;

}