int a[1000000];
int maxOccured(int L[], int R[], int n, int maxx){

    memset(a, 0, sizeof(a));
    for(int i=0;i<n;i++){
     a[L[i]]++;
     a[R[i]+1]--;
    }
    int index=-1, maxi=a[0];
    for(int i=1;i<=maxx;i++){
         a[i]+=a[i-1];
        if(a[i]>maxi){
            maxi=a[i];
            index=i;
        }
    }
    return index;
}
