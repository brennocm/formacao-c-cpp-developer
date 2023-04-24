#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* left;
    Node* right;
    int height;

    Node(int value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
        this->height = 1;
    }
};

class AVLTree {
public:
    Node* root;

    AVLTree() {
        this->root = nullptr;
    }

    int height(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return node->height;
    }

    int balanceFactor(Node* node) {
        if (node == nullptr) {
            return 0;
        }
        return height(node->left) - height(node->right);
    }

    Node* rotateRight(Node* node) {
        Node* newRoot = node->left;
        node->left = newRoot->right;
        newRoot->right = node;
        node->height = max(height(node->left), height(node->right)) + 1;
        newRoot->height = max(height(newRoot->left), height(newRoot->right)) + 1;
        return newRoot;
    }

    Node* rotateLeft(Node* node) {
        Node* newRoot = node->right;
        node->right = newRoot->left;
        newRoot->left = node;
        node->height = max(height(node->left), height(node->right)) + 1;
        newRoot->height = max(height(newRoot->left), height(newRoot->right)) + 1;
        return newRoot;
    }

    Node* insertHelper(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }

        if (value < node->value) {
            node->left = insertHelper(node->left, value);
        } else if (value > node->value) {
            node->right = insertHelper(node->right, value);
        } else {
            return node;
        }

        node->height = max(height(node->left), height(node->right)) + 1;

        int bf = balanceFactor(node);

        if (bf > 1 && value < node->left->value) {
            return rotateRight(node);
        }

        if (bf < -1 && value > node->right->value) {
            return rotateLeft(node);
        }

        if (bf > 1 && value > node->left->value) {
            node->left = rotateLeft(node->left);
            return rotateRight(node);
        }

        if (bf < -1 && value < node->right->value) {
            node->right = rotateRight(node->right);
            return rotateLeft(node);
        }

        return node;
    }

    void insert(int value) {
        this->root = insertHelper(this->root, value);
    }

    void inorderHelper(Node* node) {
        if (node == nullptr) {
            return;
        }
        inorderHelper(node->left);
        cout << node->value << " ";
        inorderHelper(node->right);
    }

    void inorder() {
        inorderHelper(this->root);
        cout << endl;
    }
};

int main() {
    AVLTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert( 60);
tree.inorder();
return 0;
}
