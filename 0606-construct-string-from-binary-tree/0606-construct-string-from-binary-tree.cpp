
class Solution {
public:
    string st = "";
    void helper(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        st = st+to_string(root->val);
        if(root->left==NULL and root->right == NULL){return ;}
        st = st+'(';
        helper(root->left);
        st = st+')';
        
        if(root->right!=NULL)
        {
            st = st+'(';
            helper(root->right);
            st=st+')';
        }
    }
    string tree2str(TreeNode* root) {
      helper(root);
        return st ;
        
    }
};