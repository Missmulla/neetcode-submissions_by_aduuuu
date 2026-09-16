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
int checkheight(TreeNode* root) {
    if(root == nullptr) return 0;

    int x = checkheight(root->left);
    if(x == -1) return -1;

    int y = checkheight(root->right);
    if(y == -1) return -1;

    if(abs(x - y) > 1) return -1;

    return max(x, y) + 1;
}
    bool isBalanced(TreeNode* root) {

        return checkheight(root) != -1;
    }
};
