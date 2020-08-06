struct Node* pairwise_swap(struct Node* head)
{
    if(head==NULL || head->next==NULL) return head;
    Node* first=head;
    Node* second=head->next;
    Node* prev=NULL;
    head=second;
    while(second!=NULL){
        Node* temp=second->next;
        second->next=first;
        first->next=temp;
        
        if(prev!=NULL){
            prev->next=second;
        }
        if(temp==NULL){
            break;
        }
        prev=first;
        first=temp;
        second=temp->next;
    }
    return head;
}