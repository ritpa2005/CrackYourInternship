    ListNode* reversed(ListNode* head){
        ListNode* p = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        while(p!=NULL){
            next = p->next;
            p->next = prev;
            prev=p;
            p=next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* m1 = reversed(l1);
        ListNode* m2 = reversed(l2);
        ListNode* head = NULL;

        int s=0,c=0,n1,n2;
        while(m1!=NULL || m2!=NULL){
            if(m1!=NULL){
                n1 = m1->val;
                m1 = m1->next;
            }
            else n1=0;
            if(m2!=NULL){
                n2 = m2->val;
                m2 = m2->next;
            }
            else n2 = 0;
            s = n1+n2+c;
            c=s/10;
            ListNode* p = new ListNode(s%10);
            p->next = head;
            head = p;
        }
        if(c){
            ListNode* p = new ListNode(c);
            p->next = head;
            head=p;
        }
        return head;
    }