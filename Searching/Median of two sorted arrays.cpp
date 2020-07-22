double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        
        if(n>m){
            vector<int> temp= a;
            a=b;
            b=temp;
            
            int tem=n;
            n=m;
            m=tem;
        }
        
        int l=0, e=n;
        while(l<=e){
            int i=(l+e)/2;
            int j=((n+m+1)/2)-i;
            
            if(i<e && a[i]<b[j-1]) l=i+1;
            
            else if(i>l && a[i-1]>b[j]) e=i-1;
            
            else{
                int maxLeft=0;
                
                if(i==0) maxLeft=b[j-1];
                else if(j==0) maxLeft=a[i-1];
                else maxLeft= max(a[i-1], b[j-1]);
                
                if((n+m)%2==1) return maxLeft;
                
                int minRight=0;
                if(i==n) minRight=b[j];
                else if(j==m) minRight=a[i];
                else minRight=min(a[i], b[j]);
                
                return (minRight+maxLeft)/2.0;
                    
            }
        }
        return 0.0;
    }