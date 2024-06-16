class Solution {
public:
    ListNode* mergeNodes(ListNode* head)
     {
        ListNode* newNode= new ListNode(0);
        ListNode* cur= newNode;
        ListNode* temp=head;
        temp=temp->next;
        int sum=0;
        while(temp != NULL)
        {
            while(temp->val != 0)
            {
                sum=sum+temp->val;
                temp=temp->next;
            }
            cur->next=new ListNode(sum);
            cur=cur->next;
            temp=temp->next;
            sum=0;
        }
         return  newNode->next;
    }
};