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
    vector<int> largestValues(TreeNode* root) {
        
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> current_level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* top=q.front();
                q.pop();
                current_level.push_back(top->val);
                if(top->left)q.push(top->left);
                if(top->right)q.push(top->right);

            }
            auto max = *max_element(current_level.begin(), current_level.end());
            ans.push_back(max);
        }
        return ans;

    }
};
