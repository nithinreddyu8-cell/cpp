#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

void preorder(Node* root) {
    if (root == nullptr)
        return;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* current = st.top();
        st.pop();

        cout << current->data << " ";

        // Push right first
        if (current->right != nullptr)
            st.push(current->right);

        // Push left second
        if (current->left != nullptr)
            st.push(current->left);
    }
}

int main() {
    /*
            1
           / \
          2   3
         / \
        4   5
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    preorder(root);

    return 0;
}