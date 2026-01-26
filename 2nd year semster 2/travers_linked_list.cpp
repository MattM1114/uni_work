#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Traverse and print linked list
void traverse(Node* head) {
    Node* current = head;  // Start from the head
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;  // Move to the next node
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating nodes manually for demonstration
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    cout << "Traversing the linked list: ";
    traverse(head);

    return 0;
}
