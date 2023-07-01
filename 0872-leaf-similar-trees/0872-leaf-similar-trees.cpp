/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNOdes;
   
    void helper(TreeNode*root,vector<int>&li)
    {
       if(root==NULL){return;}
       if(root->left==NULL && root->right==NULL){li.push_back(root->val);return ;}
        
        helper(root->left,li);
        helper(root->right,li);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int>vi1,vi2;
        
        helper(root1,vi1);
        helper(root2,vi2);
        if(vi1.size()!=vi2.size()){return false;}
        for(int i = 0 ; i<vi1.size();i++)
        {
            if(vi1[i]!=vi2[i]){return false ;}
        }
        return true; 
    }
};