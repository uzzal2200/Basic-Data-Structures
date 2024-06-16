// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//   public:
//   int val;
//     Node* next;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }

// };
// void insert_head(Node *&head,Node* tail,int v)
// {
//     Node* newNode=new Node(v);
//     Node* temp=head;
//     head=newNode;
//     newNode->next=head;
//     head=newNode;
//     if(tail == NULL)
//     {
//         tail=newNode;
//     }

// }
// void insert_tail(Node *head,Node *&tail,int v)
// {
//     Node *newNode=new Node(v);
//     newNode->next=NULL;
//       if(tail != NULL)
//    {
//      tail->next=newNode;
//    }
//     tail=newNode;
//     if(head==NULL)
//     {
//         head=newNode;
      
//     }
  
// }
// // void print_head_tail(Node *head,Node *tail)
// // {
// //     if(head != NULL && tail != NULL)
// //     {
// //         cout<<head->val<<" "<<tail->val<<endl;
// //     }
// // }
// int getHead(Node*head) 
// {
//         if (head != NULL) 
//         {
//             return head->val;
//         }
//         return -1; 
//     }
//      int getTail(Node * tail)
//       {
//         if (tail != NULL) 
//         {
//             return tail->val;
//         }
//         return -1; // Return -1 to indicate an empty list.
//     }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;
//     int n ;
//     for(int i=0;i<n;i++)
//     {
//         int value,value2;
//         cin>>value>>value2;
//         if(value == 0)
//         {
//             insert_head(head,tail,value2);
//         }
//         else if(value == 1)
//         {
//          insert_tail(head,tail,value2);
//         }
//         //print_head_tail(head,tail);
//         cout<<getHead(head)<<" "<<getTail(tail)<<endl;
//     }
//     return 0;
// }
#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtHead(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
        if (tail == nullptr) {
            tail = newNode;
        }
    }

    void insertAtTail(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (tail != nullptr) {
            tail->next = newNode;
        }
        tail = newNode;
        if (head == nullptr) {
            head = newNode;
        }
    }

    void printHeadAndTail() {
        if (head != nullptr && tail != nullptr) {
            std::cout << head->data << " " << tail->data << std::endl;
        }
    }
};

int main() {
    int Q;
    std::cin >> Q;

    LinkedList linkedList;

    for (int i = 0; i < Q; i++) {
        int X, V;
        std::cin >> X >> V;

        if (X == 0) {
            linkedList.insertAtHead(V);
        } else if (X == 1) {
            linkedList.insertAtTail(V);
        }

        linkedList.printHeadAndTail();
    }

    return 0;
}
