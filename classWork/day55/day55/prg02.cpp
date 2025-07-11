#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;

    Node(int val) {
        key = val;
        left = right = nullptr;
    }
};

class BinaryTree {
private:
    Node* root;

    Node* insert(Node* node, int val) {
        if (node == nullptr) {
            return new Node(val);
        }

        if (val < node->key)
            node->left = insert(node->left, val);
        else if (val > node->key)
            node->right = insert(node->right, val);

        return node;
    }

    void inorder(Node* node) {
        if (!node) return;
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }

    void preorder(Node* node) {
        if (!node) return;
        cout << node->key << " ";
        preorder(node->left);
        preorder(node->right);
    }

    void postorder(Node* node) {
        if (!node) return;
        postorder(node->left);
        postorder(node->right);
        cout << node->key << " ";
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    void insert(int val) {
        root = insert(root, val);
    }

    void inorder() {
        inorder(root);
        cout << endl;
    }

    void preorder() {
        preorder(root);
        cout << endl;
    }

    void postorder() {
        postorder(root);
        cout << endl;
    }
};

int main() {
    BinaryTree bt;

    bt.insert(25);
    bt.insert(50);
    bt.insert(70);
    bt.insert(90);
    bt.insert(66);
    bt.insert(35);
    bt.insert(44);
    bt.insert(31);
    bt.insert(15);
    bt.insert(22);
    bt.insert(24);
    bt.insert(18);
    bt.insert(10);
    bt.insert(12);
    bt.insert(4);

    cout << "Inorder: ";
    bt.inorder();
    cout << "==============================" << endl;
    cout << "Preorder: ";
    bt.preorder();
    cout << "==============================" << endl;
    cout << "Postorder: ";
    bt.postorder();

    return 0;
}
