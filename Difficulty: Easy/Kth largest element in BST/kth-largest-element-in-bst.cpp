class Solution {
  public:
    int kthLargest(Node *root, int &k) {
        // Your code here
        if(!root || k<0)return -1;
        
        int right = kthLargest(root->right,k);
        
        k--;
        if(k==0)return root->data;
        
        int left = kthLargest(root->left,k);
        
        return max(left,right);
        
    }
};