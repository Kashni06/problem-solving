/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  int count=0;
  int ans=-1;
  void inorder(Node* root,int K){
      if(root==nullptr || count>=K) return;
      inorder(root->left,K);
      count++;
      if(count==K){
          ans=root->data;
          return;
      }
      inorder(root->right,K);
  }
    int kthSmallest(Node *root, int K) {
        // code here
        inorder(root,K);
        return ans;
    }
};