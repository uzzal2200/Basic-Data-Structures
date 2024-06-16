/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> v;
void pre(TreeNode<int>* root)
{
     if(root == NULL) return ;
   
   v.push_back(root->data);
    pre(root->left);
    pre(root->right);
}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    
    v.clear();
   pre(root);
    return v;
    

}
