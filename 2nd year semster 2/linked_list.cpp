#include <iostream>

struct node {
    int data;
    node* next;
};

class LinkedList {
private:
    node* head;
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList() { clear(); }

    node* getHead() const { return head; }

    void append(int data) {
        if (!head) {
            head = new node{data, nullptr};
        } else {
            node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = new node{data, nullptr};
        }
    }

    void display() const {
        node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    void insertAfter(node* p, int value){
        if (!p) return;
        node* newNode = new node{value, p->next};
        p->next = newNode;
    }

    void deleteAfter(node* p){
        if (!p || !p->next) {
            std::cout << "No node to delete after." << std::endl;
            return;
        }
        node* temp = p->next;
        p->next = temp->next;
        delete temp;
    }

    void clear() {
        while (head) {
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.display();

    std::cout <<"Please enter a number to insert: ";
    int value;
    std::cin >> value;

    node* headNode = list.getHead();
    list.insertAfter(headNode, value);
    list.display();

    std::cout << "\nDeleting node after head.\n";
    list.deleteAfter(headNode);
    list.display();

    std::cout << "All nodes deleted by destructor at program end.\n";
    return 0;
}
