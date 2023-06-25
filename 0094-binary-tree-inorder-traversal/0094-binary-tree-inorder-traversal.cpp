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
    queue<int>qt;
    void helperQueue(TreeNode*root)
    {
    		if(root == NULL)
    		{
    			return ;
    		}
    		helperQueue(root->left);
    		qt.push(root->val);
    		helperQueue(root->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>result ;
        helperQueue(root);
       while(qt.size()!=0)
       {
       	result.push_back(qt.front());
       	qt.pop();
       }
       
       return result ;
    }
 };