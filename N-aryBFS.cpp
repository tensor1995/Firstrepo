/*
// Definition for a Node.
class Node {
public:
    int val = NULL;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        if(!root){
            return {};
        }
        
        queue<Node*> myq;
        
        myq.push(root);
        
        vector<vector<int>> final_res;
        
        while(!myq.empty()){
            
            int q_size = myq.size();
            
            vector<int> vec;
            for(int i=0;i<q_size;i++){
                
                Node* temp = myq.front();
                myq.pop();
                
                vec.push_back(temp->val);
                
                for(auto node:temp->children){
                    myq.push(node);
                }
            }
            
            final_res.push_back(vec);
        }
        return final_res;
    }
};