/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /** https://leetcode.com/problems/leaf-similar-trees/ */
 
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> v1;
        vector <int> v2;
        
        dfs(root1,v1);
        dfs(root2,v2);
        
        if ( v1 == v2 )
            return true;
        
        return false;
        
    }
    
    void dfs(TreeNode *node,vector <int> &arr){
        if ( node == nullptr)
            return;
        if ( node->left == nullptr && node->right == nullptr)
            arr.push_back(node->val);
        
        dfs(node->left,arr);
        dfs(node->right,arr);
         
    }
};
