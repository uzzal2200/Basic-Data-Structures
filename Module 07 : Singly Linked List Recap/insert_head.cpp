#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int val;
  Node *next;
    Node(int v)
    {
        this->val=v;
        this->next=NULL;
    }

};
void print_link_list(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(Node *head)
{
    Node *tmp=head;
    int cnt=0;
    while(tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;

    }
    return cnt;
}
void insert(Node *head,int pos,int val)
{
 Node *newNode=new Node(val);
 Node* tmp=head;
 for(int i=1;i<=pos-1;i++)
 {
    tmp=tmp->next;

 }
 // tmp pos-1
     newNode->next=tmp->next;
     tmp->next=newNode;
}
void insert_head(Node *&head,int val)
{
    Node *tmp=head;
    Node *newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}
int main()
{
    Node *head= new Node(10);
    Node *a= new Node(20);
    Node *b= new Node(30);
    Node *c= new Node(40);
    Node *d= new Node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    // print_link_list(head);
    // insert(head,3,100);
    int pos,val;
    cin>>pos>>val;
    if(pos>size(head))
    {
        cout<<"Invaild Index\n";
    }
    else if(pos==0)
    {
        insert_head(head,val);
    }
    else
    {
        insert(head,pos,val);
    }
    print_link_list(head);
    return 0;
}
