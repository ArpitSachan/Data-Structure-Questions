void divide(Node* head, Node** a, Node** b){
    Node* slow=head;
    Node* fast=head->next;
    
    if(head==NULL || head->next==NULL){
        *a=head;
        *b=NULL;
    }
    else{
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        *a=head;
        *b=slow->next;
        slow->next=NULL;
        
    }
}
Node* merge(Node* a, Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;
    
    Node* head= NULL;
    Node* tail= NULL;
    
    if(a->data<=b->data){
        head=a;
        tail=a;
        a=a->next;
    }else{
        head=b;
        tail=b;
        b=b->next;
    }
    while(a!=NULL && b!=NULL){
        if(a->data<=b->data){
            tail->next=a;
            tail=tail->next;
            a=a->next;
        }else{
            tail->next=b;
            tail=tail->next;
            b=b->next;
        }
    }
    if(a==NULL) tail->next=b;
    else tail->next=a;
    
    return head;
}
Node* mergeSort(Node* head) {
    
    Node* temp1;
    Node* temp2;
    if (head == NULL || head->next == NULL) return head;
    divide(head, &temp1, &temp2);
    temp1=mergeSort(temp1);
    temp2=mergeSort(temp2);
    
    return merge(temp1, temp2);
}