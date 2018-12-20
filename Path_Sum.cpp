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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr)   /* if there is no node then its implies that our algo should return false */
            return false;
        
        sum = sum - root->val;  /* if it meets our desired sum then it is guaranteed that out sum will converge to 0 */
        if (root->left == nullptr && root->right == nullptr) /* This is a corner case which we should not forget,there would be
                                                                a point in time when our algo converges to a negative value,so we check for that case*/
        {
            return (sum == 0);
        }
        
        return hasPathSum(root->left,sum) || hasPathSum(root->right,sum);
    }
};
