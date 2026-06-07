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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> nodes;
        for(vector<int>& a:descriptions){
            if(!nodes.count(a[1])){
                nodes[a[1]]=new TreeNode(a[1]);
            }
            if(!nodes.count(a[0])){
                nodes[a[0]]=new TreeNode(a[0]);
            }
        }
        unordered_set<int> children;
        for(vector<int>& a:descriptions){
            children.insert(a[1]);
        }
        for(auto& a:descriptions){
            int par=a[0];
            int ch=a[1];
            int left=a[2];
            TreeNode* p=nodes[par];
            TreeNode* c = nodes[ch];
            if(left){
                p->left=c;
            }
            else{
                p->right=c;
            }
        }
        for(auto& [val,node]:nodes){
            if(!children.count(val)) return node;
        }
        return nullptr;
    }
};
