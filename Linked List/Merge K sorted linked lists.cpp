class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        
        ListNode* head=NULL;
        ListNode* tail=NULL;
        ListNode* a=NULL;
        ListNode* b=NULL;
        
        if(l1->val<l2->val){
            a=l1;
            head=tail=a;
            b=l2;
            a=a->next;
        }else{
            a=l2;
            head=tail=l2;
            b=l1;
            a=a->next;
        }
        
        while(a &&b){
            if(a->val<b->val){
                tail->next=a;
                tail=a;
                a=a->next;
            }else{
                tail->next=b;
                tail=b;
                b=b->next;
            }
        }
        
        if(a) tail->next=a;
        else tail->next=b;
        
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return NULL;
        
        int r=lists.size()-1;
        while(r!=0){
            int i=0, j=r;
            while(i<j){
                lists[i]=merge(lists[i], lists[j]);
                i++;j--;
                
                if(i>=j) r=j;
            }
        }
        return lists[0];
    }
};