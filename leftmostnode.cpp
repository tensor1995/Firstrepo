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
    int findBottomLeftValue(TreeNode* root) {
      /** Apply BFS,thats it **/
        
        if(!root) return -1;
        
        queue<TreeNode*> que;
        int leftmost = -1;
        que.push(root);
        
        while(!que.empty()){
        
            int lvlCount = que.size();
            for(auto i=0; i< lvlCount ;i++){
                TreeNode *temp = que.front();
                que.pop();
                if(i == 0)
                    leftmost = temp->val;
                if(temp->left!=NULL)
                    que.push(temp->left);
                if(temp->right!=NULL)
                    que.push(temp->right);
            }
        }
        return leftmost;
    }
};
