/**  NOTES
USE FAST AND SLOW POINTERS TO GET THE MID
1. DIVIDE THE LIST FROM CENTRE INTO 2 PARTS
2. REVERSE THE SECOND HALF
3. COMPARE IT WITH THE FIRST HALF BY VALUE

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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* f2=reverse(slow);
        ListNode* f1=head;

        while(f2!=NULL){
            if(f1->val!=f2->val){
                return false;
            }
            f1=f1->next;
            f2=f2->next;
        }
        return true;
    }
    ListNode* reverse(ListNode* head){
        ListNode* temp=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};
