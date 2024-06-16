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
void level(Node* root)
{
    if(root==NULL)  return;
    queue<Node*>q;
    if(root) q.push(root);
    int sum=0;
    while(!q.empty())
    {
        // ber kore anlam
        Node* f=q.front();
        q.pop();
      sum=sum+f->val;
      //sum=sum+f->val;
     // children gulo push kore dilam
     if(f->left) q.push(f->left);
     if(f->right) q.push(f->right);
    }
    cout<<sum<<endl;
}
int main()
{
     Node* root=input();
     level(root);
    
    return 0;
}
