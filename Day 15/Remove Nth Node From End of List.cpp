    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p = head;
        int i=0;
        while(p!=NULL && i<n){
            p=p->next;
            i++;
        }
        ListNode* q = head;
        ListNode* prev;
        while(p!=NULL){
            p=p->next;
            prev=q;
            q=q->next;
        }
        if(q==head) return head->next;
        prev->next =  prev->next->next;
        return head;
    }