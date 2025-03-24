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
class FindElements {
public:
    unordered_set<int> node_val;
    void binary_tree(TreeNode* curr,int val){
        if(!curr) return;
        node_val.insert(val);
        binary_tree(curr->left,2*val+1);
        binary_tree(curr->right,2*val+2);
    }
    FindElements(TreeNode* root) {
        node_val.insert(0);
        binary_tree(root->left,1);
        binary_tree(root->right,2);
    }
    
    bool find(int target) {
        return node_val.count(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
