#define loop(n) for(int i=0;i<n;i++)
void subarraySum(int a[], int n, int s){
    int curr=0;
    int l=0, e=0;
    loop(n){
        curr+=a[i];
        if(curr>=s){
            e=i;
            while(curr>s && l<e){
                curr=curr-a[l];
                l++;
              
            }
            if(curr==s){
                cout<<l+1<<" "<<e+1;
                break;
            }
        }
    }
    if(curr!=s){
        cout<<-1;
    }
}