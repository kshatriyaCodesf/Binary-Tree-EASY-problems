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
    bool value ;
    bool evaluateTree(TreeNode* root) 
    {
        if(root->val == 1 || root->val == 0)
        {
        	return root->val; 
        }
        bool evalLEFT = evaluateTree(root->left);
        bool evalRIGHT= evaluateTree(root->right);
        
        if(root->val==2)
        {
        	value =  evalRIGHT||evalLEFT;
        }
        else if(root->val==3)
        {
        	value = evalRIGHT && evalLEFT;
        }
        return value ;
    }
};