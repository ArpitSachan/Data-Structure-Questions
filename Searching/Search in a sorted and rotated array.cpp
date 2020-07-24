class Solution {
public:
    int search(vector<int>& a, int x) {
        int n=a.size();
        int l=0, r=n-1;
        
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==x) return mid;
            else if(a[mid]>=a[l]){
                if(x<=a[mid] && x>=a[l]) r=mid-1;
                else l=mid+1;
            }
            else{
                if(x>=a[mid] && x<=a[r]) l=mid+1;
                else r=mid-1;
            }
        }
        return -1;
    }
};