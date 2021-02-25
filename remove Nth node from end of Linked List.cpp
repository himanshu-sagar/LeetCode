/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * first,*second,*prev,*temp;
        
        first=head;
        second=head;
        while(n-- && first!=NULL)
            first=first->next;
        
        while(first!=NULL)
        {
            prev=second;
            first=first->next;
            second=second->next;
        }
        temp=second;
        
        
        if(!prev)
            head=head->next;
        else
            prev->next=prev->next->next;
        delete temp;
        return head;
        
    }
};