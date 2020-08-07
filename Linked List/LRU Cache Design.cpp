struct Node{
    int key;
    int val;
    Node* next;
    Node* prev;
    Node(int x , int y){
        key=x;
        val=y;
        next=NULL;
        prev=NULL;
    }
};

class LRUCache {
    private: int capacity;
    int count;
    unordered_map<int, Node*> mp;
    Node* head;
    Node* tail;
public:
    LRUCache(int capacity) {
        this->capacity=capacity;
        count=0;
        unordered_map<int, Node*> temp;
        mp=temp;
        head=new Node(0, 0);
        tail=new Node(0, 0);
        head->next=tail;
        head->prev=NULL;
        tail->prev=head;
        tail->next=NULL;
    }
    void addToHead(Node* curr){
        curr->next=head->next;
        curr->next->prev=curr;
        head->next=curr;
        curr->prev=head;
    }
    void deleteNode(Node* curr){
        Node* next=curr->next;
        Node* prev=curr->prev;
        prev->next=next;
        next->prev=prev;
    }
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            deleteNode(mp[key]);
            addToHead(mp[key]);
            return mp[key]->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node* curr=mp[key]; 
            curr->val=value;
            deleteNode(curr);
            addToHead(curr);
        }else{
            Node* curr= new Node(key, value);
            mp[key]=curr;
            if(count<capacity){
                addToHead(curr);
                count++;
            }else{
                mp.erase(tail->prev->key);
                deleteNode(tail->prev);
                addToHead(curr);
            }
        }
    }
};