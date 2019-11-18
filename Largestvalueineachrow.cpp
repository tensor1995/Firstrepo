/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        
        if(!root) return {};
        
        queue<TreeNode*> q;
        int currentLevel;
        
        q.push(root);
        int maxi;
        vector<int> result;
        
        while(!q.empty()){
            
            int qsize = q.size();
            
            for(auto i=0; i< qsize; i++){
                TreeNode *currentNode = q.front();
                q.pop();
                
               if( i == 0){
                    maxi = currentNode->val;
               }
                else{
                    maxi = max(currentNode->val,maxi);
                }
                
                
                if(currentNode->left!=NULL)
                    q.push(currentNode->left);
                if(currentNode->right!=NULL)
                    q.push(currentNode->right);
                   
                
                
            }
            
            result.push_back(maxi);
        }
        
        return result;
    }
};
