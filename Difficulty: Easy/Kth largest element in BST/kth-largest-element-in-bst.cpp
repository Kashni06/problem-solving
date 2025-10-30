class Solution {
  public:
    int count = 0;   // To keep track of visited nodes
    int ans = -1;    // To store the Kth largest element

    void reverseInorder(Node* root, int K) {
        if (root == nullptr || count >= K) 
            return;

        // Step 1: Go right first (largest values first)
        reverseInorder(root->right, K);

        // Step 2: Visit current node
        count++;
        if (count == K) {
            ans = root->data;
            return;
        }

        // Step 3: Go left
        reverseInorder(root->left, K);
    }

    int kthLargest(Node *root, int K) {
        reverseInorder(root, K);
        return ans;
    }
};
