class Solution {
  public:
  
    void reverse(vector<int>& arr) {
        int st = 0, end = arr.size() - 1;
        while (st < end) {
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }

    vector<int> reverseLevelOrder(Node *root) {
        vector<int> arr;
        if (root == NULL) return arr;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            arr.push_back(curr->data);

            // Push right first, then left
            // so when reversed, levels are in correct order
            if (curr->right) q.push(curr->right);
            if (curr->left) q.push(curr->left);
        }

        // Reverse the collected nodes
        reverse(arr);

        return arr;
    }
};
