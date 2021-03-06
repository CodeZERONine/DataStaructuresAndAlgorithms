//
// Created by Akshansh Gusain on 10/03/21.
// InOrder Traversal - LNR - recusrion
#include<stdc++.h>

using namespace std;
using namespace std;

struct Node {
    int data;
    Node *left, *right;

    explicit Node(int data) {
        this->data = data;
        this->left = this->right = nullptr;
    }
};

void inorder(Node* root){
    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {

    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    inorder(root);

    return 0;
}
