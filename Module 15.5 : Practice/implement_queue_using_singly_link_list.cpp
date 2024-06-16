#include <bits/stdc++.h> 
class Node
{
  public:
  int data;
  Node*next;
  Node(int data)
  {
      this->data=data;
      this->next=NULL;
  }
};
class Queue {
    Node*head;
    Node*tail;
 
public:
     
    Queue() {
        // Implement the Constructor
        head=NULL;
        tail=NULL;
     
   
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
       return head==NULL;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
  
        Node* newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=tail->next;
    
        
    }

    int dequeue() {
        
     if(head==NULL)
     {
         return -1;
     }
     int temp=head->data;
     Node* deleteNode=head;
     head=head->next;
     delete (deleteNode);
    
     return temp; 
    }

    int front() {
        // Implement the front() function
     if (head == NULL) {
         return -1;
     }
     return head->data;
        
    }
};