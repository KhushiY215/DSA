//base cases ka dhyan rakhna and use prev to stay right before slow so that when slow reaches the middle, prev will be right behind it.

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=NULL;
        if(head==NULL || head->next== NULL){
            return NULL;
        }
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        prev->next=slow->next;
        return head;
    }
};
