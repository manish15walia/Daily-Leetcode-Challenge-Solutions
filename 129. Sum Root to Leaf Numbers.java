/* https://leetcode.com/problems/sum-root-to-leaf-numbers/description/ */

class Solution {
    public int sumNumbers(TreeNode root) {
        return sumNumbers(root,0);
        
    }
    public int sumNumbers(TreeNode root,int num){
        if(root==null)
            return 0;
        if(root.left==null && root.right==null){
            return num*10+root.val;
        }
        int x = sumNumbers(root.left,num*10+root.val);
        int y = sumNumbers(root.right,num*10+root.val);
        return x+y;
    }
}
