int intersectPoint(Node* head1, Node* head2)
{
    Node* curr=head2;
    int size=0;
    while(curr!=NULL){
        size++;
        curr=curr->next;
    }
    curr=head1;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    int d=abs(count-size);
    
    curr=(count>size)?head1:head2;
    Node* temp=(count>size)?head2:head1;
    while(d--){
        curr=curr->next;
    }
    while(curr!=temp){
        curr=curr->next;
        temp=temp->next;
    }
    if(curr) return curr->data;
    
    return -1;
}
