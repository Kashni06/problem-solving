/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node* root,vector<int>&val){
        if(!root) return;
        inorder(root->left,val);
        val.push_back(root->data);
        inorder(root->right,val);
    }
    void fillInorder(Node* root ,vector<int>&vals,int&i){
        if(!root) return;
        fillInorder(root->left,vals,i);
        root->data=vals[i++];
        fillInorder(root->right,vals,i);
    }
    Node *binaryTreeToBST(Node *root) {
        // Your code goes here
        vector<int>vals;
        inorder(root,vals);
        sort(vals.begin(),vals.end());
        int i=0;
        fillInorder(root,vals,i);
        return root;
        
    }
};