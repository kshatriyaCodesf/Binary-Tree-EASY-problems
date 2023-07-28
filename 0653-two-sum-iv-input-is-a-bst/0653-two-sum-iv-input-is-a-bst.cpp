
class Solution {
public:
  
    unordered_set<int>s;
    
   
    void arrange(TreeNode*root)
    {
        if(root==NULL){return ;}
       
         arrange(root->left);
        
         s.insert(root->val);
        
         arrange(root->right);
         
       
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