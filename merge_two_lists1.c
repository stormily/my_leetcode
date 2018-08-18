struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
        if(l1 == NULL) 
            return l2;  
        if(l2 == NULL) 
            return l1;  

        struct ListNode* new_list = NULL;
        if(l1->val < l2->val){
        	new_list = l1;
        	l1 = l1->next;
        } else {
        	new_list = l2;
        	l2 = l2->next;
        }

        struct ListNode *p = new_list;
        while(l1 != NULL && l2 != NULL){
        	if(l1->val < l2->val){
        		p->next = l1;
        		l1 = l1->next;
        	} else {
        		p->next = l2;
        		l2 = l2->next;
        	}
        	p = p->next;
        }
        
        if(l1)
        	p->next = l1;
        else
        	p->next = l2;

        return new_list;
    
}