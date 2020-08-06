Node *copyList(Node *head) {
    Node* curr=head;
    while(curr){
        Node* next= curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=next;
        curr=next;
    }
    curr=head;
    while(curr!=NULL){
        curr->next->arb=(curr->arb!=NULL)?curr->arb->next:NULL;
        curr=curr->next->next;
    }
    curr=head;
    Node* head2=head->next;
    Node* temp=head2;
    while(temp->next!=NULL){
        Node* next=temp->next;
        temp->next=next->next;
        temp=(next->next!=NULL)?next->next:NULL;
    }
    head->next=head->next->next;
    return head2;
}