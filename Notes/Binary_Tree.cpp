#include <bits/stdc++.h>

using namespace std;

class node {
    public:
        int data;
        node* left_node;
        node* right_node;

        node(int val) {
            data = val;
            left_node = right_node = NULL;
        }
};

void printBinaryTree(node *root) {
    if (root == NULL) {
        return;
    }

    cout << root->data << endl;

    if (root->left_node != NULL) {
        cout << "   |- " << root->left_node->data << endl;
        printBinaryTree(root->left_node);
    }

    if (root->right_node != NULL) { 
        cout << "   |- " << root->right_node->data << endl;
        printBinaryTree(root->right_node);
    }
}

int main()
{
    node *root = new node(1);

    root->left_node = new node(2);
    root->right_node = new node(3);

    node *child1 = root->left_node;
    node *child2 = root->right_node;

    child1->left_node = new node(4);
    child2->left_node = new node(6);

    printBinaryTree(root);
    return 0;
}