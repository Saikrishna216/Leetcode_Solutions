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
//Level order traversal 
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int max_sum=INT_MIN;
        int level=0;
        int ans;
        while(!q.empty()){
            int n=q.size();
            int sum=0;
            level++;
            for(int i=0;i<n;i++){
                TreeNode* N=q.front();
                sum+=N->val;
                q.pop();
                if(N->left!=nullptr){
                    q.push(N->left);
                }
                if(N->right!=nullptr){
                    q.push(N->right);
                }
            }
            if(max_sum<sum){
                max_sum=sum;
                ans=level;
            }
        }
        return ans;
        
    }
};
