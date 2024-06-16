#include<bits/stdc++.h>
using namespace std;
class Node
{
   public:
   int val;
   Node* left;
   Node* right;
   Node(int val)
   {
    this->val=val;
    this->left=NULL;
    this->right=NULL;
   }
};
Node* input()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)  root=NULL;
   else  root=new Node(val);
   queue<Node*>q;
   if(root) q.push(root);
   while(!q.empty())
   {
    Node* f=q.front();
    q.pop();
    int l,r;
    cin>>l>>r;
    Node* myLeft;
    Node* myRight;
    if(l==-1) myLeft=NULL;
    else myLeft=new Node(l);
    if(r==-1) myRight=NULL;
    else myRight=new Node(r);
    f->left=myLeft;
    f->right=myRight;
    if(f->left) q.push(f->left);
    if(f->right) q.push(f->right);
    
   }
   return root;

}
int number(Node* root)
{
    if(root == NULL) return 0;
    int l=number(root->left);
    int r=number(root->right);
    return l+r+1;
}
int mxHight(Node* root)
{
    if(root == NULL) return 0;
    int l=mxHight(root->left);
    int r=mxHight(root->right);
    return max(l,r) +1;
}
int main()
{
     Node* root=input();
     int u=number(root);
     int totalNumber=pow(2,mxHight(root))-1;
     if(u==totalNumber) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     
    
    return 0;
}
