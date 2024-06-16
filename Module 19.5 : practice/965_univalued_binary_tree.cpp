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
  bool univalued(TreeNode* root,int data)
  {
      if(root==NULL) return true;
      if(root->val != data) return false;
      bool l=univalued(root->left,data);
      bool r=univalued(root->right,data);
      if(l==false || r==false) return false;
      else return true;

  }
    bool isUnivalTree(TreeNode* root) {
        return univalued(root,root->val);
        
        
    }
};