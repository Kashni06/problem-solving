/*
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
         Node* prev=nullptr;
         Node* head=nullptr;
         
         void inorder(Node* root){
        if(root==nullptr) return;
        inorder(root->left);
        
        if(prev==nullptr){
            head=root;
        }
        else{
            prev->right=root;
        }
        root->left=nullptr;
        prev=root;
        inorder(root->right);
         }
    Node *flattenBST(Node *root) {
        // code here
        inorder(root);
        return head;
        
    }
};