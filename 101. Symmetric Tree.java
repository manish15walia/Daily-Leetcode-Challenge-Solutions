/* https://leetcode.com/problems/symmetric-tree/description/ */

class Solution {
    boolean isMirror(TreeNode first,TreeNode second){
        if(first==null && second==null){
            return true;
        }
        if(first==null || second==null){
            return false;
        }
        if(first.val!=second.val){
            return false;
        }

        if(isMirror(first.left,second.right)==false ||isMirror(first.right,second.left)==false){
            return false;
        }
        return true;
    }
    public boolean isSymmetric(TreeNode root) {
        return isMirror(root,root);
    }
}
