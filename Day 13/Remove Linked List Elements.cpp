    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            head = head->next;
        }
        if(head==NULL) return head;
        ListNode* prev = head;
        ListNode* curr = head->next;
        while(curr!=NULL){
            if(curr->val==val){
                prev->next = curr->next;
                curr = prev->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }