/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int>result;
        if(!root) return result;
        
        map<int,int>topNode;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            Node* curr=p.first;
            int hd=p.second;
            if(topNode.find(hd)==topNode.end()){
                topNode[hd]=curr->data;
            }
            if(curr->left)
            q.push({curr->left,hd-1});
            if(curr->right)
            q.push({curr->right,hd+1});
        }
        for(auto it:topNode){
            result.push_back(it.second);
        }
        return result;
        
    }
};