    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* p=head;
        while(p!=NULL && p->next!=NULL){
            if(p->val==p->next->val) p->next=p->next->next;
            else p=p->next;
        }
        return head;
    }