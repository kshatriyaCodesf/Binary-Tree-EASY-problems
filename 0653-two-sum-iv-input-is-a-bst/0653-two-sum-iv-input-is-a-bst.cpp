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
  
    unordered_set<int>s;
    // unordered_set and the vector acts like stack whatever the element get inserted inside the set will  abide the LIFO rule
   
    void arrange(TreeNode*root)
    {
        if(root==NULL){return ;}
       
         arrange(root->right);
         s.insert(root->val);
         arrange(root->left);
       
    }
    bool  findTWOsum(unordered_set<int>s , int k)
    {
        for(auto it = s.begin();it!=s.end();it++)
        {
            if(s.find(k-*(it))==it){continue;}
            if(s.find(k-*(it))!=s.end()){return true;}
        }
        return false ;
    }

    bool findTarget(TreeNode* root, int k) 
    {
        if(root==NULL){return false ;}
        arrange(root);
        return  findTWOsum(s , k);
    }
};