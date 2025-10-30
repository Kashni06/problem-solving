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
    int countPairs(Node* root1, Node* root2, int x) {
        // code here
        if(!root1 || !root2) return 0;
        stack<Node*>s1,s2;
        Node* a=root1;
        Node* b=root2;
        int count=0;
        while(true){
            while(a){
                s1.push(a);
                a=a->left;
            }
            while(b){
                s2.push(b);
                b=b->right;
            }
            if(s1.empty() || s2.empty()) break;
            Node* n1=s1.top();
            Node* n2=s2.top();
            int sum=n1->data+n2->data;
            if(sum==x){
                count++;
                s1.pop();
                s2.pop();
                a=n1->right;
                b=n2->left;
                
            }
            else if(sum<x){
                s1.pop();
                a=n1->right;
            }
            else{
                s2.pop();
                b=n2->left;
            }
        }
        return count;
    }
};