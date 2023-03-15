/* https://leetcode.com/problems/check-completeness-of-a-binary-tree/description/ */


class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        bool seen = false;
        
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            
            if (node == NULL) {
                seen = true;
                continue;
            }
            
            if (seen) {
                return false;
            }
            
            q.push(node->left);
            q.push(node->right);
        }
        
        return true;
    }
};
