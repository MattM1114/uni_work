#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = nullptr;
        right = nullptr;

    }
};

void inorder(node* root){
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if (root==nullptr)return;
    cout <<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data<< " ";
}
