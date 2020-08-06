Node* reverse(Node* head){
     Node* prev=NULL;
    Node* next=NULL;
    Node* curr= head;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
Node* rotate(Node* head, int k)
{
   Node* prev=NULL;
    Node* next=NULL;
    Node* curr= head;
    while(curr!=NULL && k--){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head->next=reverse(next);
    return reverse(prev);
}
