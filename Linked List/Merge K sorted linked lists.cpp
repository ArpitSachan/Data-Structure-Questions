Node* merge(Node* a, Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;
    Node* head;
    Node* tail;
    
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
            tail=a;
            a=a->next;
        }else{
            tail->next=b;
            tail=b;
            b=b->next;
        }
    }
    if(a==NULL) tail->next=b;
    else tail->next=a;
    return head;
}
Node * mergeKLists(Node *a[], int N)
{ 
    for(int i=1;i<N;i++){
        a[0]=merge(a[0], a[i]);
    }
    
    return a[0];
}