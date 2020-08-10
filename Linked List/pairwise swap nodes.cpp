class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* first=head;
        ListNode* second=head->next;
        ListNode* prev =NULL;
        
        while(second!=NULL && second->next!=NULL){
            ListNode* next=second->next;
            first->next=next;
            second->next=first;
            if(prev!=NULL){
            prev->next=second;}
            else head=second;
            prev=first;
            first=next;
            second=next->next;
        }
        if(second){
            ListNode* next=second->next;
            first->next=next;
            second->next=first;
            if(prev!=NULL){
            prev->next=second;}
             else head=second;
        }
        return head;
    }
};