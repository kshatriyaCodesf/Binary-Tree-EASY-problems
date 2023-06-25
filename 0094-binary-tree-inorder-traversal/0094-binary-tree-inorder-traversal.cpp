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
    // METHOD 1:(best solution)
//     queue<int>qt;
//     void helperQueue(TreeNode*root)
//     {
//     		if(root == NULL)
//     		{
//     			return ;
//     		}
//     		helperQueue(root->left);
//     		qt.push(root->val);
//     		helperQueue(root->right);
//     }
    
//     vector<int> inorderTraversal(TreeNode* root) 
//     {
//         vector<int>result ;
//         helperQueue(root);
//        while(qt.size()!=0)
//        {
//        	result.push_back(qt.front());
//        	qt.pop();
//        }
       
//        return result ;
//     }
    
    
    // METHOD 2:(not best solution)
    
    // vector<int>result ;
    // vector<int> inorderTraversal(TreeNode* root) 
    // {
    //     if(root==NULL)
    //     {
    //         return result ;
    //     }
    //     vector<int>left = inorderTraversal(root->left);
    //     result.push_back(root->val);
    //     vector<int>right = inorderTraversal(root->right);
    //     return result ;
    // }
    
    
    //METHOD 3:
    
    void helperIN(TreeNode*root,vector<int>&result)
    {
        if(root==NULL)
        {   
            return ; 
        }
        helperIN(root->left,result);
        result.push_back(root->val);
        helperIN(root->right,result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result ;
        helperIN(root,result);
        return result ;
    }
};

    
 