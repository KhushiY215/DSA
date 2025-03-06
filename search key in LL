class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
         if(head==NULL) return false;
        if(head->data==key) return true;
        int f=0;
        Node* temp=head;
        for(int i=0;i<n;i++)
        {
            if(temp->data==key)
            {
                f=1;
                break;
            }
            temp=temp->next;
        }
        if(f==1) return true;
        else return false;
    }
};
