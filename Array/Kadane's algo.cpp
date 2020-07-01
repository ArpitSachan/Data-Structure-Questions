int maxSubarraySum(int a[], int n){
    
    int maxi=0;
    int res=INT_MIN;
    
    for(int i=0;i<n;i++){
        maxi=max(a[i], maxi+a[i]);
        res= max(res, maxi);
    }
    return res;
}