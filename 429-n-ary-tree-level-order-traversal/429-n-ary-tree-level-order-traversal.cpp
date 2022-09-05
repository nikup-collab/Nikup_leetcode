/*
// Definition for a Node. queue<Node *>q;
        q.push(root);
        vector<vector<int>>answer;
        while(!q.empty()){
            
            int n= q.size();
            vector<int> vect;
            
            for(int i=0;i<n;i++){
                
                
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL) return {};
        queue<Node*>minh;
        minh.push(root);
        vector<vector<int>>answer;
        while(!minh.empty()){
            
            int n= minh.size();
            vector<int> vect;
            
            for(int i=0;i<n;i++){
                
                Node *temp =minh.front();
                minh.pop();
                
                for(auto child : temp->children){
                    minh.push(child);
                }
                vect.push_back(temp->val);
            }
            answer.push_back(vect);
        }
        
        return answer;
        
    }
};