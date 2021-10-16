//
// Created by Akshansh Gusain on 20/03/21.
//

#include<stdc++.h>

using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;

    /* Constructor that allocates
    a new node with the given data
    and NULL left and right pointers. */
    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }
};


int largestBSTUtil(node *node, int *min_ref, int *max_ref, int *max_size_ref, bool *is_bst_ref) {

    /* Base Case */
    if (node == nullptr) {
        *is_bst_ref = true; // An empty tree is BST
        return 0; // Size of the BST is 0
    }

    int min = INT_MAX;

    /* A flag variable for left subtree property
        i.e., max(root->left) < root->data */
    bool left_flag = false;

    /* A flag variable for right subtree property
        i.e., min(root->right) > root->data */
    bool right_flag = false;

    int ls, rs; // To store sizes of left and right subtrees

    /* Following tasks are done by
    recursive call for left subtree
        a) Get the maximum value in left
        subtree (Stored in *max_ref)
        b) Check whether Left Subtree is
        BST or not (Stored in *is_bst_ref)
        c) Get the size of maximum size BST
        in left subtree (updates *max_size) */
    *max_ref = INT_MIN;
    ls = largestBSTUtil(node->left, min_ref, max_ref, max_size_ref, is_bst_ref);
    if (*is_bst_ref == 1 && node->data > *max_ref)
        left_flag = true;

    /* Before updating *min_ref, store the min
    value in left subtree. So that we have the
    correct minimum value for this subtree */
    min = *min_ref;

    /* The following recursive call
    does similar (similar to left subtree)
    task for right subtree */
    *min_ref = INT_MAX;
    rs = largestBSTUtil(node->right, min_ref, max_ref, max_size_ref, is_bst_ref);
    if (*is_bst_ref == 1 && node->data < *min_ref)
        right_flag = true;

    // Update min and max values for
    // the parent recursive calls
    if (min < *min_ref)
        *min_ref = min;
    if (node->data < *min_ref) // For leaf nodes
        *min_ref = node->data;
    if (node->data > *max_ref)
        *max_ref = node->data;

    /* If both left and right subtrees are BST.
    And left and right subtree properties hold
    for this node, then this tree is BST.
    So return the size of this tree */
    if (left_flag && right_flag) {
        if (ls + rs + 1 > *max_size_ref)
            *max_size_ref = ls + rs + 1;
        return ls + rs + 1;
    } else {
        // Since this subtree is not BST,
        // set is_bst flag for parent calls
        *is_bst_ref = 0;
        return 0;
    }
}

int largestBST(node *node) {
    // Set the initial values for
    // calling largestBSTUtil()
    int min = INT_MAX; // For minimum value in right subtree
    int max = INT_MIN; // For maximum value in left subtree

    int max_size = 0; // For size of the largest BST
    bool is_bst = 0;

    largestBSTUtil(node, &min, &max, &max_size, &is_bst);

    return max_size;
}


int main() {
    /* Let us construct the following Tree
       50
   / \
   10 60
   / \ / \
5 20 55 70
           / / \
       45 65 80
*/

    node *root = new node(50);
    root->left = new node(10);
    root->right = new node(60);
    root->left->left = new node(5);
    root->left->right = new node(20);
    root->right->left = new node(55);
    root->right->left->left = new node(45);
    root->right->right = new node(70);
    root->right->right->left = new node(65);
    root->right->right->right = new node(80);

    /* The complete tree is not BST
    as 45 is in right subtree of 50.
    The following subtree is the largest BST
            60
        / \
        55 70
    / / \
    45 65 80
    */
    cout << " Size of the largest BST is " << largestBST(root);

    return 0;
}
