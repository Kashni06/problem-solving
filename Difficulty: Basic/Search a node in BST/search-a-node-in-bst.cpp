/*
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
bool search(Node* root, int x) {
    // Traverse the BST iteratively
    while (root != nullptr) {
        if (root->data == x) {  
            return true;  // Found the element
        } 
        else if (x < root->data) {  
            root = root->left;  // Move to left subtree
        } 
        else {
            root = root->right;  // Move to right subtree
        }
    }
    return false;  // Element not found
}
