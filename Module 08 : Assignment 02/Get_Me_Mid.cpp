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
void insert_head(Node *&head,Node * &tail,int v)
{
    Node * newNode= new Node(v);
    if(head ==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void printMiddleElements(Node* head)
 {
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while (fast && fast->next)
     {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast) 
    {
        std::cout << slow->val;
        // Even number of elements, print both middle elements
        
    } else
     {
        // Odd number of elements, print the middle element
        std::cout << prev->val << " " << slow->val;
    }
}
int main()
{
    Node * head=NULL;
    Node *tail=NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val == -1) break;
        insert_head(head,tail,val);
    }
    for(Node * i=head;i->next != NULL;i=i->next)
    {
        for(Node * j=i->next;j != NULL;j=j->next)
        {
            if(i->val < j->val)
            {
             swap(i->val,j->val);
            }
        }
    }
    
    printMiddleElements(head);
    return 0;
}
