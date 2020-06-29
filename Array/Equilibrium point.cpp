int equilibriumPoint(long long a[], int n) {
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    int index=-1;
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
        if(sum-a[i]==a[i-1])
          {
              index=i;
              break;
          }
    }
    if(n==1){
        index=0;
    }
    return index==-1?-1:index+1;
}