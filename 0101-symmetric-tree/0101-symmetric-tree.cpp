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
    void traverse(TreeNode*l, TreeNode*r, bool &ans){
        if(l->val!=r->val) {
            ans=false;
            return;
        }
        if(l->left!=nullptr and r->right!=nullptr) traverse(l->left, r->right, ans);
        else if(l->left!=nullptr or r->right!=nullptr){
            ans=false;
            return;
        }
        if(l->right!=nullptr and r->left!=nullptr) traverse(l->right, r->left, ans);
        else if(l->right!=nullptr or r->left!=nullptr){
            ans=false;
            return;
        }
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root->left==nullptr and root->right==nullptr) return true;
        if(root->left==nullptr or root->right==nullptr) return false;
        bool ans=true;
        traverse(root->left, root->right, ans);
        return ans;
    }
};