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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *newhead=new ListNode;
        newhead->next=head;
        ListNode *temp=head;
        ListNode *tail=newhead;
        
        if(temp==NULL)
        {
            return temp;
        }
        
        while(temp!=NULL)
        {
            while(temp->next!=NULL && tail->next->val==temp->next->val)
                temp=temp->next;
            if(tail->next==temp)
                tail=tail->next;
            else
            {
                tail->next=temp->next;
            }
            temp=temp->next;
            
        }
        return newhead->next;
    }
};