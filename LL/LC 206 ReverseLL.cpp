 class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev,*curr,*temp;
        temp=NULL;
        curr = head;
        prev=NULL;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
             prev=curr;
            curr=temp;
           
        }
        return prev;
    }
};
