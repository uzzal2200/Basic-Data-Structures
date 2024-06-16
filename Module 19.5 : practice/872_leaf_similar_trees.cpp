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
   vector<int>v1;
   vector<int>v2;
   void traversal1(TreeNode* root1)
   {
      // if(root1 == NULL) return;
       if(root1->left)
       {
           traversal1(root1->left);
           
       }
       if(root1->right)
       {
           traversal1(root1->right);
        
       }
       if(root1->left == NULL && root1->right == NULL)
       {
           v1.push_back(root1->val);
       }
   }
      void traversal2(TreeNode* root2)
   { 
       if(root2->left)
       {
           traversal2(root2->left);
           
       }
       if(root2->right)
       {
           traversal2(root2->right);
          
       }
       if(root2->left == NULL && root2->right==NULL)
       {
           v2.push_back(root2->val);
       }
   }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear();
        v2.clear();
        traversal1(root1);
        traversal2(root2);
        if(v1==v2)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};