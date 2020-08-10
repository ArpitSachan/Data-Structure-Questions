class Solution {
public:
    ListNode* reverse(ListNode* head, int k, int n){
        ListNode* prev=NULL;
       ListNode* curr=head;
       ListNode* next=NULL;
       int count=k;
        
       while(curr && count--){
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
        }
        n=n-k;
        if(next){
            if(n>=k){
            head->next=reverseKGroup(next, k);}
            else{
                head->next=next;
            }
        }
        
        return prev;
    }
ListNode* reverseKGroup(ListNode* head, int k) {
        
    int n=0;
    ListNode* curr=head;
    while(curr){
        curr=curr->next;
        n++;
    }
    return reverse(head, k, n);
       
    }
};