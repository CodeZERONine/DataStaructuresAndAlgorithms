//
// Created by Akshansh Gusain on 21/01/22.
//
#include<stdc++.h>
using namespace std;


struct Node {
    int data;
    struct Node *left, *right;

    Node() {
        data = 0;
        left = nullptr;
        right = nullptr;
    }

    Node(int key) {
        data = key;
        left = nullptr;
        right = nullptr;
    }

    Node(int key, Node *left, Node *right) {
        data = key;
        this->left = left;
        this->right = right;
    }
};

void findMinMaxDistance(Node *root, int  hd, int level , map<int, pair<int, int> > &m) {
    if (root == nullptr) {
        return;
    }

    if(m.count(hd) == 0){
        m[hd] = make_pair(root->data, level);
    }else if(m[hd].second > level){
        m[hd] = make_pair(root->data, level);
    }

    if (root->left != nullptr) {
        findMinMaxDistance(root->left, hd - 1, level + 1, m);
    }
    if (root->right != nullptr) {
        findMinMaxDistance(root->right, hd + 1, level + 1, m);
    }
}


void topView(Node *root) {

    /// map to store the pair of node value and its level
    // with respect to the vertical distance from root.
    // <horizontalDistance, <nodeValue, level>>
    map<int, pair<int, int> > m;

    // Horizontal Distance from the root
    int hd = 0;
    // Tree Level
    int level = 0;

    findMinMaxDistance(root, hd, level, m);

    for (auto & it : m) {
        cout << it.second.first << " ";
    }
}


int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->right->right = new Node(5);
    root->left->right->right->right = new Node(6);

    cout << "Vertical order traversal is \n";
    topView(root);

    /*
     Vertical order traversal is
        4
        2
        1 5 6
        3 8
        7
        9
     */
    return 0;
}

