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

    Node(int key, Node *left, Node *right) {
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

void printLL(ListNode *head) {
    ListNode *curr = head;
    while (curr != nullptr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}


void removeElements(ListNode *head, int val) {
    if (head == nullptr) {
        return;
    }

    // Edge case where first node has the value = val
    while (head != nullptr and head->val == val) {
        head = head->next;
    }

    ListNode *curr = head;
    ListNode *prev = nullptr;

    while (curr != nullptr) {
        if (curr->val == val) {
            prev->next = curr->next;
            curr = curr->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
}

ListNode *reverseLL(ListNode *head) {
    if (head == nullptr or head->next == nullptr) {
        return head;
    }
    ListNode *remainingList = reverseLL(head->next);
    head->next->next = head;
    head->next = nullptr;

    return remainingList;
}

bool isPalindrom(ListNode *head) {
    if (head == nullptr or head->next == nullptr) {
        return true;
    }
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast->next != nullptr and fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    slow->next = reverseLL(slow->next);
    slow = slow->next;


    while(slow!= nullptr){
        if(head->val != slow->val){
            return false;
        }
        head = head->next;
        slow = slow->next;
    }
    return true;
}


int main() {
    ListNode *head = nullptr;
    addAtEnd(&head, 1);
    addAtEnd(&head, 2);
    addAtEnd(&head, 6);
    addAtEnd(&head, 3);
    addAtEnd(&head, 4);
    addAtEnd(&head, 5);
    addAtEnd(&head, 6);
    printLL(head);


    cout << isPalindrom(head) << endl;
    printLL(head);
    return 0;
}