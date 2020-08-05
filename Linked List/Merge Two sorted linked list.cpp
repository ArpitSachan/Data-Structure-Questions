Node* sortedMerge(Node* a, Node* b)  
{  
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