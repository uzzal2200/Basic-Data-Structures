#include<bits/stdc++.h>
using namespace std;
  class Node
{
  public:
  int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print_normal(Node *head)
{
    Node * temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
void insert_tail(Node *&head,Node *&tail,int val)
{
    Node * newNode=new Node(val);
    if(tail == NULL)
    {
       head=newNode;
       tail=newNode;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
int main()
{
   Node * head=NULL;
    Node * tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
         insert_tail(head,tail,val);
    }
     for(Node* i=head;i->next != NULL; i=i->next)
     {
        for(Node* j=i->next;j->next != NULL;j=j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
     }
    print_normal(head);
    return 0;
}
