int normal(int a[], int n){
    int res=INT_MIN;
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(a[i], maxi+a[i]);
        res=max(res, maxi);
    }
    return res;
}
int circular(int a[], int n){
    
    int normalMax=normal(a, n);
    if(normalMax<0)
      return normalMax;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        a[i]= -a[i];
    }
    
    sum+=normal(a, n);
    return max(sum, normalMax);
}
int circularSubarraySum(int arr[], int num){
    
   return circular(arr, num);
}