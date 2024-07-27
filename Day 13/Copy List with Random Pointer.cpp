    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* p = head;
        while(p!=NULL){
            Node* q = new Node(p->val);
            q->next = p->next;
            p->next = q;
            p = q->next;
        }

        p=head;
        while(p!=NULL){
            if(p->random == NULL) p->next->random = NULL;
            else p->next->random = p->random->next;
            p=p->next->next;
        }

        Node* copy = head->next;
        Node* q = copy;
        p = head;
        while(p!=NULL){
            p->next = p->next->next;
            if(q->next!=NULL) q->next = q->next->next;
            p=p->next;
            q=q->next;
        }
        return copy;
    }