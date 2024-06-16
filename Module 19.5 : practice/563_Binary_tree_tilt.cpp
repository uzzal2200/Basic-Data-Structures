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
   int tilt=0;
   int tiltSum(TreeNode* root)
   {
       if(root == NULL) return 0;
       int l=tiltSum(root->left);
       int r=tiltSum(root->right);
       tilt=tilt + abs(l-r);
       return l+r+root->val;
   }
    int findTilt(TreeNode* root) {
        tiltSum(root);
        return tilt;
        
    }
};