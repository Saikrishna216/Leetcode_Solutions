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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int size=q.size();
            vector<TreeNode*> curr_elements;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                curr_elements.push_back(curr);
                if(curr->left)  q.push(curr->left);
                if(curr->right)q.push(curr->right);

            }
            if(level&1){
                for(int i=0;i<size/2;i++){
                    swap(curr_elements[i]->val,curr_elements[size
                    -i-1]->val);
                }
            }            
            level++;
        }
        return root;
    }
};
