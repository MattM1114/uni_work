#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SelfAdjustingList {
private:
    Node* head;

public:
    SelfAdjustingList() {
        head = nullptr;
    }

    // Insert at the front
    void insertFront(int value) {
        Node* newNode = new Node{value, head};
        head = newNode;
    }

    // Find and move to front
    bool find(int value) {
        if (head == nullptr || head->data == value)
            return head != nullptr;

        Node* prev = nullptr;
        Node* curr = head;

        // Search for the node
        while (curr != nullptr && curr->data != value) {
            prev = curr;
            curr = curr->next;
        }

        // If not found
        if (curr == nullptr)
            return false;

        // Move the found node to the front
        prev->next = curr->next;
        curr->next = head;
        head = curr;
        return true;
    }

    // Display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    SelfAdjustingList list;
    list.insertFront(10);
    list.insertFront(20);
    list.insertFront(30);
    list.insertFront(40);

    cout << "Initial list: ";
    list.display();

    list.find(10);
    cout << "After accessing 10: ";
    list.display();

    return 0;
}
