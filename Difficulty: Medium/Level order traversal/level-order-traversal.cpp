/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>>result;
        if(root==nullptr)
        return result;
        
        queue<Node* >q;
        q.push(root);
        
        while(!q.empty()){
            int level_size=q.size();
            vector<int>level_nodes;
            
            for(int i=0;i<level_size;i++){
                Node* curr=q.front();
                q.pop();
                
                level_nodes.push_back(curr->data);
                
                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                 if(curr->right!=nullptr){
                    q.push(curr->right);
                }
            }
            result.push_back(level_nodes);
        }
        return result;
    }
};