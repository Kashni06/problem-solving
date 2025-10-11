class Solution {
  public:
    bool isBstUtil(Node* root, int minVal, int maxVal) {
        if (root == nullptr)
            return true;

        if (root->data <= minVal || root->data >= maxVal)
            return false;

        return isBstUtil(root->left, minVal, root->data) &&
               isBstUtil(root->right, root->data, maxVal);
    }

    bool isBST(Node* root) {
        return isBstUtil(root, INT_MIN, INT_MAX);
    }
};
