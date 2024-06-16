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
void level(Node* root,int x)
{
    if(root == NULL || x<0) 
    {
         cout<<"Invalid"<<endl;
        return;
    }
queue<pair<Node*,int>>q;
if(root) q.push({root,0});
bool chack=false;
while(!q.empty())
{
    pair<Node*,int> pr=q.front();
    Node* node=pr.first;
    int level=pr.second;
    q.pop();
   if(level == x) 
   {
    chack=true;
    cout<<node->val<<" ";
   }
  if(x>level)
  {
    chack=false;
  }

  

    if(node->left) q.push({node->left,level+1});
    if(node->right) q.push({node->right,level+1});
}

if(chack == false) cout<<"Invalid";

 
}
int main()
{
     Node* root=input();
    int x;
    cin>>x;
    level(root,x);
    
    return 0;
}