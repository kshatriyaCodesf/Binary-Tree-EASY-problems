
class Solution {
public:
    TreeNode*helper(TreeNode*root1 , TreeNode*root2)
    {
        if(root1==nullptr and root2==nullptr){return NULL;}
        
        if(root1!=nullptr and root2==nullptr)
        {
            return root1;
        }
        if(root1==nullptr and root2!=nullptr)
        {
            return root2;
        }
        
        TreeNode*newnode = new TreeNode(root1->val+root2->val);
        newnode->left = helper(root1->left , root2->left);
        newnode->right = helper(root1->right , root2->right);
        
        return newnode ;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return helper(root1 , root2);
    }
};