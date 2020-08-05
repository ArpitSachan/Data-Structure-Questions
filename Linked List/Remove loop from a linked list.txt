void removeLoop(Node* head)
{
    if(!head) return;
    
    Node* fast=head->next;
    Node* slow=head;
    
    while(fast!=slow)
    {
        if( !fast||!fast->next ) return;
        fast=fast->next->next;
        slow=slow->next;
    }
    int size=1;
    fast=fast->next;
    while(slow!=fast){
        fast=fast->next;
        size++;
    }
    slow=head;
    fast=head;
    size--;
    while(size--){
        fast=fast->next;
    }
    while(fast->next!=slow){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
  
}