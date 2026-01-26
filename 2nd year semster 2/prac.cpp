#include <iostream>
#include <string>
using namespace std;

#define MAX 5 // Maximum number of print jobs that can wait in the queue

class CircularQueue {
    private:
        string jobs[MAX]; // Array to store print jobs
        int front,rear,count;
        ;
    public:
        CircularQueue() {
        front = 0;
        rear = -1;
        count = 0;
        }

        bool isFull() {
            return (count == MAX);
        }

    bool isEmpty() {
        return(count == 0);

}

// Add a new print job to the queue
    void enqueue(string job) {
        if(isFull()){cout << "this list is full we can't add to it"<<endl;}
        else{
        rear = (rear +1)% MAX;
        jobs[rear]=job;
        count++;
        cout << job << "was added to the list"<<endl;

        }

}


 // Remove a completed print job from the queue
void dequeue() {
    if (isEmpty()){ cout << "there is nothing in the list" << endl;
    }
    else
    {
        cout <<"completed job: "<< jobs[front]<<endl;
        front=(front +1)%MAX;
        count--;
    }
    

}

// Display current queue jobs
void display() {
    if(isEmpty()) {
        cout<< "there is nothing in the list" << endl;
    }
    else{
        cout << "the jobs in the list are :"<<endl;
        int index = front;
        for (int i = 0; i < count; i++)
        {

            cout<<i<<". "<<jobs[i]<<endl;
            index = (index+1)%MAX;
        }
        
    }

}
};

int main() {
    int choice = 0;
    CircularQueue jobs;
    string job;

    do
    {
            cout << "\n====== QUEUE MENU ======" << endl;
        cout << "1. Add job" << endl;
        cout << "2. do job" << endl;
        cout << "3. Display jobs" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter job name: ";
            cin >>job;
            jobs.enqueue(job);
            break;
        case 2:
            jobs.dequeue();
            break;
        case 3:
            jobs.display();
            break;
        case 4:
            cout <<"Goodbye! The program is closing"<<endl;
            break;
        
        default:
            cout <<"Invalid choice. Try again"<<endl;
        }
    } while (choice != 4);
    

return 0;
}