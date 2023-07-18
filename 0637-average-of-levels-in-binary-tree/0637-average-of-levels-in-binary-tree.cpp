class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> vec;
        queue<TreeNode*> q;

        q.push(root);
        q.push(nullptr); // Add nullptr as a level separator

        while (!q.empty()) {
            double sum = 0;
            int count = 0;
            
            while (q.front() != nullptr) {
                TreeNode* node = q.front();
                q.pop();
                
                sum += node->val;
                count++;
                
                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }
            
            q.pop(); // Remove the level separator nullptr
            
            if (count > 0) {
                double average = sum / count;
                vec.push_back(average);
            }
            
            if (!q.empty()) {
                q.push(nullptr); // Add the level separator for the next 
                
                /*nullptr also has some sizes to avoid this we should check for the 
                the empty array case also otherwise the while loop will never get terminated
                and this led the TLE ERROR*/
            }
        }
        
        return vec;
    }
};
