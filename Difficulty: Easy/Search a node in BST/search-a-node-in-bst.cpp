/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int x) {
        // code here
        if(root==NULL)//if tree is empty
    return 0;
    
    if(root->data==x)
    return 1;
    if(root->data>x)//for left side check
    return search(root->left,x);
    else//for right side check
    return search(root->right,x);
    }
};