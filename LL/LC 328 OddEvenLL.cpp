/**   BASE CONDITION FOR HEAD==NULL OR HEAD->NEXT==NULL IS MANDATORY. SEPARATE ODD AND EVEN AND MAP ODD END WITH EVEN HEAD FOR CORRECT LINKING   **/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddH=head;
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* evenH=head->next;
        ListNode* even=head->next;
        ListNode* odd= head;

        while(odd!=NULL && even!=NULL && even->next!=NULL){
            odd->next=even->next;
            odd=odd->next;

            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenH;
        return oddH;
    }
};
