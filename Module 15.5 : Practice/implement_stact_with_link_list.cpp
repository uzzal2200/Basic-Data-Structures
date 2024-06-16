
class Stack
{
    Node*head;
    Node*tail;
    int sz;

public:
   Stack()
   {
        head=NULL;
    
      sz=0;
   }
    int getSize()
    {
        return sz;
    

    }

    bool isEmpty()
    {
     if(sz==0) return true;
     else return false;
    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node* newNode=new Node(data);
        if(head == NULL)
        {
            head=newNode;
           
        }
      else
      
           newNode->next=head;
       head=newNode;
      
    }

    void pop()
    {
         
        if(head == NULL)
        {
            return;
        }
       sz--;
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    int getTop()
    {
        if (head == NULL) {
            return -1;
        }
        return  head->data;
    }
};