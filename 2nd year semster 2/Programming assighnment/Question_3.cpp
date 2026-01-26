#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    bool leftThread;
    bool rightThread;
};

class ThreadedBST {
private:
    Node* root;

public:
    ThreadedBST() {
        root = nullptr;
    }

    // Helper function to create a new node
    Node* createNode(int key) {
        Node* node = new Node;
        node->data = key;
        node->left = node->right = nullptr;
        node->leftThread = node->rightThread = true;
        return node;
    }

    // Insert a node into the threaded BST
    void insert(int key) {
        if (root == nullptr) {
            root = createNode(key);
            return;
        }

        Node* curr = root;
        Node* parent = nullptr;

        while (curr != nullptr) {
            if (key == curr->data) {
                cout << "Duplicate keys not allowed\n";
                return;
            }

            parent = curr;
            if (key < curr->data) {
                if (!curr->leftThread)
                    curr = curr->left;
                else
                    break;
            } else {
                if (!curr->rightThread)
                    curr = curr->right;
                else
                    break;
            }
        }

        Node* node = createNode(key);

        if (key < parent->data) {
            node->left = parent->left;
            node->right = parent;
            parent->leftThread = false;
            parent->left = node;
        } else {
            node->left = parent;
            node->right = parent->right;
            parent->rightThread = false;
            parent->right = node;
        }
    }

    // Inorder traversal without recursion or stack
    void inorder() {
        Node* curr = leftMost(root);
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = inorderSuccessor(curr);
        }
        cout << endl;
    }

    // Find the leftmost node
    Node* leftMost(Node* node) {
        if (node == nullptr) return nullptr;
        while (!node->leftThread)
            node = node->left;
        return node;
    }

    // Find the inorder successor
    Node* inorderSuccessor(Node* node) {
        if (node->rightThread)
            return node->right;
        node = node->right;
        while (!node->leftThread)
            node = node->left;
        return node;
    }

    // Delete a node (basic case handling)
    void deleteNode(int key) {
        Node* curr = root;
        Node* parent = nullptr;
        bool found = false;

        // Search for the node
        while (curr != nullptr) {
            if (key == curr->data) {
                found = true;
                break;
            }
            parent = curr;
            if (key < curr->data) {
                if (!curr->leftThread)
                    curr = curr->left;
                else
                    break;
            } else {
                if (!curr->rightThread)
                    curr = curr->right;
                else
                    break;
            }
        }

        if (!found) {
            cout << "Key not found.\n";
            return;
        }

        // For simplicity, handle leaf node deletion only
        if (curr->leftThread && curr->rightThread) {
            if (parent == nullptr)
                root = nullptr;
            else if (curr == parent->left) {
                parent->leftThread = true;
                parent->left = curr->left;
            } else {
                parent->rightThread = true;
                parent->right = curr->right;
            }
            delete curr;
            cout << "Node deleted.\n";
        } else {
            cout << "Deletion of non-leaf nodes not shown here for brevity.\n";
        }
    }
};

int main() {
    ThreadedBST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder traversal of threaded BST:\n";
    tree.inorder();

    tree.deleteNode(20);
    cout << "After deleting 20:\n";
    tree.inorder();

    return 0;
}
