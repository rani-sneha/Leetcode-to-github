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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        int csum=l1->val+l2->val;
        if(csum>9)
        {
            carry=1;
            csum=csum%10;
        }
        ListNode* dummyHead = new ListNode(csum);
        ListNode* tail=dummyHead;
        while(l1->next && l2->next)
        {
            l1=l1->next;
            l2=l2->next;
            csum=l1->val+l2->val+carry;
            carry=0;
            if(csum>9)
            {
                carry=1;
                csum%=10;
            }
            ListNode* newNode = new ListNode(csum);
            tail->next=newNode;
            tail = tail->next;
        }
        while(l1->next)
        {
            l1=l1->next;
            csum=l1->val+carry;
            carry=0;
            if(csum>9)
            {
                carry=1;
                csum%=10;
            }
            ListNode* newNode = new ListNode(csum);
            tail->next=newNode;
            tail = tail->next;
        }
        while(l2->next)
        {
            l2=l2->next;
            csum=l2->val+carry;
            carry=0;
            if(csum>9)
            {
                carry=1;
                csum%=10;
            }
            ListNode* newNode = new ListNode(csum);
            tail->next=newNode;
            tail = tail->next;
        }
        if(carry>0)
        {
            ListNode* newNode = new ListNode(1);
            tail->next=newNode;
            tail = tail->next;
        }
        return dummyHead;
    }
};