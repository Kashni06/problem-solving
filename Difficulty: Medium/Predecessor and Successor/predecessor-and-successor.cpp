/* BST Node
class Node
{
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        Node* pre = NULL;
        Node* suc = NULL;
        Node* curr = root;
        
        // Step 1: Traverse to find the node with value == key
        while (curr != NULL) {
            if (curr->data == key) {
                // Find predecessor in left subtree
                if (curr->left != NULL) {
                    Node* temp = curr->left;
                    while (temp->right != NULL)
                        temp = temp->right;
                    pre = temp;
                }

                // Find successor in right subtree
                if (curr->right != NULL) {
                    Node* temp = curr->right;
                    while (temp->left != NULL)
                        temp = temp->left;
                    suc = temp;
                }
                break;  // Key found, stop searching
            }
            else if (key < curr->data) {
                suc = curr;       // possible successor
                curr = curr->left;
            }
            else {
                pre = curr;       // possible predecessor
                curr = curr->right;
            }
        }

        return {pre, suc};
    }
};
