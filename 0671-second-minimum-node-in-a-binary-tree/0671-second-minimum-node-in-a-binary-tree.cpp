
class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) 
    {
        if(root==NULL)
        {return -1;}
        if(root->left==NULL && root->right==NULL){return -1;}
        
        int left = root->left->val ;
        int right = root->right->val;
        
        if(root->val == root->left->val) left = findSecondMinimumValue(root->left);
        if(root->val == root->right->val) right = findSecondMinimumValue(root->right);
        
        if(left!=-1 && right!=-1)
        {
            return min(left , right);
        }
        if(left==-1)
            return right;
        else
            return left;
    }
};