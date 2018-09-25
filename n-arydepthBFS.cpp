/*
// Definition for a Node.
class Node {
public:
    int val;
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
    int maxDepth(Node* root) {
        
        if(!root)
            return 0;
        int depth = 0;
        queue<Node*> myq;
        
        myq.push(root);
        
        while(!myq.empty()){
    
            int q_size = myq.size();
            
            for(int i=0;i<q_size;i++){
                auto node = myq.front(); 
                myq.pop();
                for(auto child:node->children)
                    if(child)
                        myq.push(child);
                
            }
            depth++;
        }
        return depth;
    }
};