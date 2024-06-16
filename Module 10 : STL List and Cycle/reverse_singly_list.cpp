#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
void print_recersion(Node *n)
{
    // base case 
    if(n==NULL)
    return ;
    cout<<n->val<<" ";
    print_recersion(n->next);
}

void print_reverse(Node *n)
{
    // base case 
    if(n==NULL)
    return ;
    print_reverse(n->next);
    cout<<n->val<<" ";
    
}
void reverse(Node *&head,Node * cur)
{
    if(cur->next == NULL)
    {
    head=cur;
    return;
    }
   reverse(head,cur->next);
   cur->next->next=cur;
    cur->next=NULL;
}
void print(Node *head)
{
    Node * temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
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
    // print_recersion(head);
    // cout<<endl;
    // print_reverse(head);
    reverse(head,head);
    print(head);
    return 0;
}
