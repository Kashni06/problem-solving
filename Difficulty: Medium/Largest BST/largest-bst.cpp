class Solution {
  public:
    // Helper function that returns:
    // {isBST, size, minValue, maxValue}
    vector<int> helper(Node* root, int &maxSize) {
        if (!root) return {1, 0, INT_MAX, INT_MIN};  // empty tree is BST

        auto left = helper(root->left, maxSize);
        auto right = helper(root->right, maxSize);

        // Check if current subtree is BST
        if (left[0] && right[0] && root->data > left[3] && root->data < right[2]) {
            int size = left[1] + right[1] + 1;
            maxSize = max(maxSize, size);
            int mn = min(left[2], root->data);
            int mx = max(right[3], root->data);
            return {1, size, mn, mx};  // current subtree is BST
        }

        // Not a BST
        return {0, 0, 0, 0};
    }

    int largestBst(Node *root) {
        int maxSize = 0;
        helper(root, maxSize);
        return maxSize;
    }
};
