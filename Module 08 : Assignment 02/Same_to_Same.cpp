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
bool link_list_same(Node* head_1,Node* head_2)
{
    while (head_1 != NULL && head_2 != NULL)
{
if(head_1->val != head_2->val)
{
   return false;
}
head_1=head_1->next;
head_2=head_2->next;
}
return (head_1 == NULL) && (head_2 == NULL);
}

int main()
{
    int valu;
    Node * head_1=NULL;
    while(true)
    {
        cin>>valu;
        if(valu ==-1) break;
        insert_at_tail(head_1,valu);
    }
    int valu2;
    Node *head_2=NULL;
    while(true)
    {
        cin>>valu2;
        if(valu2 == -1) break;
        insert_at_tail(head_2,valu2);
    }
  if(link_list_same(head_1,head_2))
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
    return 0;
}
