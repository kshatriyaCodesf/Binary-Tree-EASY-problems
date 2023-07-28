

class Solution {
public:
    TreeNode*z=NULL;
    void helper(TreeNode*cloned , TreeNode*target)
    {
        if(cloned==NULL){return ;}
        if(cloned->val == target->val)
        {
            z = cloned;
            return ;
        }
        helper(cloned->left,target);
        helper(cloned->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      if(original==NULL){return NULL;}
        
       helper(cloned  , target);
        return z ;
    }
};