#include <iostream>
using namespace std;

//setting up the node 
struct Node 
{
    int id;
    Node* next;
};
// this function returns a node 
Node* buildCircle(int N){
    if (N <= 0) return nullptr;
    Node* head = new Node{1,nullptr};
    Node* prev = head;
    for (int i= 2;i <= N; i++){
        Node* temp = new Node{i, nullptr};
        prev->next =temp;
        prev = temp;
    }
    prev->next = head;
    return head;
}

int josephus(int N,int M){
    if (N ==0) return -1;
    Node* curr = buildCircle(N);
    Node* prev = nullptr;

    while (curr->next != curr)
    {
        for (int i =0; i< M;i++){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        Node* toDelete = curr;
        curr = curr->next;
        delete toDelete; 
    }
    int winner = curr->id;
    delete curr;
    return winner;
    
}

int main() {
    int N, M;
    cout << "Enter N (number of people): ";
    cin >> N;
    cout << "Enter M (number of passes): ";
    cin >> M;

    int winner = josephus(N, M);
    cout << "The winner is person " << winner << endl;

    return 0;
}