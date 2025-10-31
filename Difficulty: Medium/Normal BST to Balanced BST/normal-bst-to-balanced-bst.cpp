/*Structure of the Node of the BST is as
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {

  public:
  
  void inorder(Node* root,vector<int>&v){
      if(root==nullptr) return;
      inorder(root->left,v);
      v.push_back(root->data);
      inorder(root->right,v);
  }
  Node* buildBalancedBst(vector<int>&v,int start,int end){
      if(start>end) return nullptr;
      
      int mid=(start+end)/2;
      
      Node* root=new Node(v[mid]);
      
      root->left=buildBalancedBst(v,start,mid-1);
      root->right=buildBalancedBst(v,mid+1,end);
      return root;
  }
    Node* balanceBST(Node* root) {
        // Code here
         vector<int> v;

        // Step 1: Inorder traversal -> sorted elements
        inorder(root, v);

        // Step 2: Sorted array se balanced BST bnao
        return buildBalancedBst(v, 0, v.size() - 1);
        
    }
};