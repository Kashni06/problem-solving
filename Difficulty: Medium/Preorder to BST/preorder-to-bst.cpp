class Solution {
  public:
    // Function that constructs BST from its preorder traversal.
    Node* build(int pre[], int &i, int n, int minVal, int maxVal) {
        if(i >= n) return nullptr;
        int val = pre[i];
        if(val < minVal || val > maxVal) return nullptr;
        
        Node* root = new Node();  // default constructor from GfG
        root->data = val;
        i++;
        
        root->left = build(pre, i, n, minVal, val - 1);
        root->right = build(pre, i, n, val + 1, maxVal);
        
        return root;
    }
    
    Node* Bst(int pre[], int size) {
        int i = 0;
        return build(pre, i, size, INT_MIN, INT_MAX);
    }
};
