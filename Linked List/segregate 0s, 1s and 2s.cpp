Node* segregate(Node *head) {
    if (!head || !(head->next))
        return head;
    Node* z_head=new Node(0);
    Node* o_head=new Node(0);
    Node* t_head=new Node(0);
    Node* zero=z_head;
    Node* one=o_head;
    Node* two=t_head;
    
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            
                zero->next=curr;
                zero=zero->next;
            
        }else if(curr->data==1){
            
                one->next=curr;
                one=one->next;
            
        }else{
                two->next=curr;
                two=two->next;
        }
        curr=curr->next;
    }
    
    zero->next=o_head->next?o_head->next:t_head->next;
    one->next=t_head->next;
    two->next=NULL;
    head=z_head->next;
    
    delete(z_head);
    delete(o_head);
    delete(t_head);
    
    return head;
}