
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* slow=head;
        ListNode* fast=head;
       
        while(n--)
        {
            fast=fast->next;
        }
         if(fast == NULL) return slow->next;
        while(fast->next != NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};