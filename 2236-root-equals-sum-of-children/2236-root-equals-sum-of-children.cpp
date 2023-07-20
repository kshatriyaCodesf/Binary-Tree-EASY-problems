
class Solution {
public:
   
/*only use in the case of the multiple nodes not the three nodes*/
    
//     bool z = true;
//     int helper(TreeNode*root)
//     {
//         if(root==NULL){return 0;}
//         if(root->left==NULL and root->right==NULL){return root->val;}
        
//         int left = helper(root->left);
//         int right = helper(root->right);
        
//         if(root->val!=left+right){z=false;}
//         return root->val;
    
//      }
//     bool checkTree(TreeNode* root) 
    // {
//         if(root==NULL){return false;}
//         int x = helper(root);
//         return z ;
    // }   
    
    
    
    bool checkTree(TreeNode*root)
    {
        if(root->left->val+root->right->val==root->val){return true;}
        else{return false;}
    }
 
};