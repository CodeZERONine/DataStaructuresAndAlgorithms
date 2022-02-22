//
// Created by Akshansh Gusain on 10/03/21.
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

    __attribute__((unused)) Node(int key, Node *left, Node *right) {
        data = key;
        this->left = left;
        this->right = right;
    }
};

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void addAtEnd(ListNode **head, int data) {

    // Both ways of creating a Node object are fine.
    auto *myNode = new ListNode(data);
    ListNode myNode2(data);

    ListNode *last = *head;

    if (*head == nullptr) {
        *head = myNode;
        return;
    }

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = myNode;
}

void addAtStart(ListNode **head, int data){
    auto myNode = new ListNode(data);
    myNode->next = *head;
    *head = myNode;
}


void printLL(ListNode *head) {
    ListNode *curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}


int main() {
    ListNode *head = nullptr;
    addAtEnd(&head, 1);
    addAtEnd(&head, 2);
    addAtEnd(&head, 4);
    addAtEnd(&head, 3);

    ListNode *head1 = nullptr;
    addAtEnd(&head1, 9);
    addAtEnd(&head1, 9);
    //addAtEnd(&head1, 4);
    printLL(head); printLL(head1);

    printLL(addTwoNumbers(head,head1));

    return 0;
}