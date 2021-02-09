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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        ListNode* finalhead=NULL;
        ListNode* finaltail=NULL;
        if(h1==NULL)
            return h2;
        if(h2==NULL)
            return h1;
        
        if(h1->val<=h2->val)
        {
            finalhead=h1;
            finaltail=h1;
            h1=h1->next;
        }
        else
        {
            finalhead=h2;
            finaltail=h2;
            h2=h2->next;
        }
        
        while(h1!=NULL && h2!=NULL)
        {
            if(h1->val<=h2->val)
            {
                finaltail->next=h1;
                finaltail=h1;
                h1=h1->next;
            }
            else
            {
                finaltail->next=h2;
                finaltail=h2;
                h2=h2->next;
            }
        }
        if(h1==NULL)
            finaltail->next=h2;
        else
            finaltail->next=h1;
        
        return finalhead;
    }
};