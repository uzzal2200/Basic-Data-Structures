
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode* fast=head;
        ListNode* slow=head;
        while(--k)
        {
            fast=fast->next;
        }
        ListNode* first=fast;
        while(fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        swap(first->val, slow->val);
        return head;

        
    }
};