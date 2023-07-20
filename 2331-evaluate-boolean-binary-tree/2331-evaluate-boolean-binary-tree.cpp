
class Solution {
public:
    bool evaluateTree(TreeNode* root) 
    {
//         if(root==NULL)
//         {
//             return false;
//         }
//         if(root->left==NULL and root->right==NULL){return root->val;}
//         bool left = evaluateTree(root->left);
//         bool right = evaluateTree(root->right);
        
//         if(root->val==2){return left or right;}
//         else if(root->val==3){return left and right;}
        
//         return false ; // this is for the those cases in which root->val is neither 2 or nor 3
           
        
         
        if (root->val < 2) return root->val;
        
        else if (root->val == 2) return evaluateTree(root->left) || evaluateTree(root->right);
        
        return evaluateTree(root->left) && evaluateTree(root->right);
    }
};