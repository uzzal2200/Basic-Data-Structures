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
void insert_at_tail(Node *&head,int v)
{
    Node * newNode=new Node(v);
    if(head == NULL)
    {
        head=newNode;
       // tail=newNode;
        return;
    }
    //tail->next=newNode;
    //tail=newNode;
    Node* temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;

    }
    temp->next=newNode;
}
void printreverse(Node *head)
{
    if(head == NULL)
    {
        return;
    }
    printreverse(head->next);
    cout<<head->val<<" ";
}
void print(Node *head)
{
    Node* temp=head;
    while(temp != NULL)
   {
     cout<<temp->val<<" ";
     temp=temp->next;
   }

}
int main()
{
    Node* head=NULL;
    //Node * tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,val);
       
    }
     printreverse(head);
     cout<<endl;
    print(head);
    cout<<endl;
    return 0;
}
