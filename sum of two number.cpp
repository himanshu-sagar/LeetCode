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
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2) {
        if(head1==NULL)
            return head2;
        if(head2==NULL)
            return head1;
        
        ListNode * tail=NULL;//points to head of new LL
        ListNode *head3=NULL;
        
        int carry=0,newdata=0;
        while(head1!=NULL || head2!=NULL)
        {
            int sum=carry+ (head1!=NULL ? head1->val : 0)+(head2!=NULL ? head2->val : 0);
            carry=(sum>=10 ? 1:0);
            newdata=sum%10;
            
            ListNode *newnode=new ListNode(newdata);
            if(tail==NULL)
            {
                tail=newnode;
                head3=newnode;
            }
            else
            {
                head3->next=newnode;
                head3=newnode;
            }
            if(head1)
                head1=head1->next;
            if(head2)
                head2=head2->next;
        }
        if(carry>0)
        {
            ListNode *newnode=new ListNode(carry);
            head3->next=newnode;
        }
        return tail;
    }
};