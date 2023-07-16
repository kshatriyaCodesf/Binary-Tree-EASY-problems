
class Solution {
public:
    vector<int>s;
    int min = INT_MAX ;
    void inorderArrange(TreeNode*root)
    {
        if(root==NULL){return ;}
        inorderArrange(root->left);
        s.push_back(root->val);
        inorderArrange(root->right);
    }
    int minDiffInBST(TreeNode* root) 
    {
        inorderArrange(root);
        for(int i = 0 ; i < s.size(); i++)
        {
            for(int j = i+1 ; j<s.size();j++)
            {
                if(abs(s[i]-s[j])<min){min=abs(s[i]-s[j]);}
            }
        }
         return min;
    }
   
};