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
    void traverse(TreeNode* root){
        if(root!=nullptr){
            TreeNode*temp=root->right;
            root->right=root->left;
            root->left=temp;
            traverse(root->left);
            traverse(root->right);
        }
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        traverse(root);
        return root;
    }
};