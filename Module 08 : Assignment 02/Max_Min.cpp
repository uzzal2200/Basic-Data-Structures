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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
          return;
      }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;

    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
void findmaxmin(Node* head,int &max,int &min)
{
  max=INT_MIN;
  min=INT_MAX;
  while(head != NULL)
  {
    if(head->val > max)
    {
        max=head->val;
    }
    if(head->val < min)
    {
        min=head->val;
    }
    head=head->next;
  }
}
int main()
{
    int max,min;
    int val;
    Node * head=NULL;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
   findmaxmin(head,max,min);
   cout<<max<<" "<<min<<endl;
    return 0;
}