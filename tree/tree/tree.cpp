#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;

    Node() {
        data = 0;
        right = nullptr;
        left = nullptr;
    }
};

struct Tree {
    Node* root;

    Tree() {
        root = nullptr;
    }
};

void insert(Node*& root, int value);
void printTree(Node* node);

Tree *t = new Tree();

int main()
{
    int x;
    while (cin >> x) {
        insert(t->root, x);
    }

    printTree(t->root);
}

void insert(Node*& root, int value) {
    if (root == nullptr) {
        root = new Node();
        root->data = value;
        return;
    }

    if (value <= root->data) {
        insert(root->left, value);
    }
    else {
        insert(root->right, value);
    }
}

void printTree(Node* node) {
    if (node == nullptr) return;

    printTree(node->left);
    cout << node->data << " ";
    printTree(node->right);
}

