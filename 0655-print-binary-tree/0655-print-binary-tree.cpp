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
    int h=0;
    void findheight(TreeNode*root, int l){
        h=max(l, h);
        if(root->left!=nullptr) findheight(root->left, l+1);
        if(root->right!=nullptr) findheight(root->right, l+1);
        
    }
    void traverse(TreeNode*root, int r, int c, vector<vector<string>>&res){
        if(root!=nullptr){
            res[r][c]=to_string(root->val);
            traverse(root->left, r+1, c-pow(2, h-r-1), res);
            traverse(root->right, r+1, c+pow(2, h-r-1), res);
        }
    }
public:
    vector<vector<string>> printTree(TreeNode* root) {
        findheight(root, 0);
        int c=pow(2, h+1)-1;
        vector<vector<string>>res(h+1, vector<string>(c));
        traverse(root, 0, c/2, res);
        return res;
    }
};