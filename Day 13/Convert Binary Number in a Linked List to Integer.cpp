    int getDecimalValue(ListNode* head) {
        ListNode*p = head;
        int num=0;
        while(p!=NULL){
            num = num*2 + p->val;
            p=p->next;
        }
        return num;
    }