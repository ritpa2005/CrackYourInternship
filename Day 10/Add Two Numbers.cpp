    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,c=0, value, t1,t2;
        ListNode*p = new ListNode(0);
        ListNode*s = p;
        while(l1 || l2 ||c){
            if(l1!=NULL){
                t1 = l1->val; l1=l1->next;
            }
            else t1=0;

            if(l2!=NULL){ 
                t2 = l2->val;l2= l2->next;
            }
            else t2=0;

            value = t1 + t2 + c;
            sum = value%10;
            c= value/10;  

            p->next = new ListNode(sum);
            p=p->next;
        }
        return s->next;
    }