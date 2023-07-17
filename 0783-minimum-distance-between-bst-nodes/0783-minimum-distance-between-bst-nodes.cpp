
class Solution {
public:
    /*
The time complexity of the given code can be analyzed as follows:

1. In the `inorderArrange` function, an inorder traversal of the BST is performed. In the worst case scenario, where the BST is a completely unbalanced tree, this traversal will visit each node once, resulting in a time complexity of O(n), where n is the number of nodes in the BST.

2. After the inorder traversal, the nested loops in the `minDiffInBST` function iterate through all pairs of values in the `s` vector. The outer loop runs (n-1) times, and the inner loop runs (n-2) + (n-3) + ... + 1 times. This results in a time complexity of O(n^2) for the nested loops.

Therefore, the overall time complexity of the given code is O(n^2) in the worst case scenario, where n is the number of nodes in the BST.

Regarding the space complexity:

1. The `s` vector is used to store the inorder traversal sequence of the BST. In the worst case scenario, where the BST is a completely unbalanced tree, the `s` vector will store all the nodes of the BST, resulting in a space complexity of O(n).

2. Apart from the `s` vector, a few other variables like `min` and the function parameters require a constant amount of space, which can be considered negligible.

Therefore, the overall space complexity of the given code is O(n), where n is the number of nodes in the BST, due to the space required for the `s` vector.
    
    
    */
    
    // vector<int>s;
    // int min = INT_MAX ;
    // void inorderArrange(TreeNode*root)
    // {
    //     if(root==NULL){return ;}
    //     inorderArrange(root->left);
    //     s.push_back(root->val);
    //     inorderArrange(root->right);
    // }
    // int minDiffInBST(TreeNode* root) 
    // {
    //     inorderArrange(root);
    //     for(int i = 0 ; i < s.size(); i++)
    //     {
    //         for(int j = i+1 ; j<s.size();j++)
    //         {
    //             if(abs(s[i]-s[j])<min){min=abs(s[i]-s[j]);}
    //         }
    //     }
    //      return min;
    // }
    
    
    // int res = INT_MAX, pre = -1;
    // int minDiffInBST(TreeNode* root) 
    // {
    //     if (root->left != NULL) minDiffInBST(root->left);
    //     if (pre >= 0) res = min(res, root->val - pre);
    //     pre = root->val;
    //     if (root->right != NULL) minDiffInBST(root->right);
    //     return res;
    // }
    
    vector<int>Inorder;
    
    void inorder(TreeNode* root){
        if(!root)
            return;
        else{
            
            inorder(root->left);
             Inorder.push_back(root->val);
             inorder(root->right);
           
           
            
            
        }
    }
    
    int minDiffInBST(TreeNode* root) {
        if(!root)
            return 0;
        inorder(root);
        int res = INT_MAX;
        for(auto i=1;i<Inorder.size();i++){
            res = min(res, Inorder[i]-Inorder[i-1]); }
        return res;
        
    }
    
    
   
};