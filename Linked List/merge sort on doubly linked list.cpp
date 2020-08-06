void divide(Node* head, Node** a, Node** b){
    Node* slow=head;
    Node* fast=head->next;
    
    if(head==NULL || head->next==NULL){
        *a=head;
        *b=NULL;
    }else{
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    *a=head;
    *b=slow->next;
    slow->next=NULL;
    }
}
Node* merge(Node* a, Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;
    
    Node* head=NULL;
    Node* tail=NULL;
    
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
            a->prev=tail;
            tail=tail->next;
            a=a->next;
            
        }else{
            tail->next=b;
            b->prev=tail;
            tail=tail->next;
            b=b->next;
        }
    }
    if(a==NULL) {
        tail->next=b;
        b->prev=tail;
    }else{
        tail->next=a;
        a->prev=tail;
    }
    head->prev=NULL;
    return head;
}
struct Node *sortDoubly(struct Node *head)
{
	Node* a;
	Node* b;
	if(head==NULL || head->next==NULL) return head;
	divide(head, &a, &b);
	a=sortDoubly(a);
	b=sortDoubly(b);
	
	return merge(a, b);
}