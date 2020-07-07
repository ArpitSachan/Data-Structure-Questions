#define ll long long

ll NoOfPairs(int x, int Y[], int n, int count[]){
    
    if(x==0) return 0;
    
    if(x==1) return count[0];
    
    int* index=upper_bound(Y, Y+n, x);
    int res=(Y+n)-index;
    
    res+=count[0]+count[1];
    
    if(x==2){
        res-=(count[3]+count[4]);
    }
    if(x==3){
        res+=count[2];
    }
    return res;
}
long long countPairs(int X[], int Y[], int m, int n)
{
   int count[5]={0};
   for(int i=0;i<n;i++){
       if(Y[i]<5)
        count[Y[i]]++;
   }
   
   sort(Y, Y+n);
   
   ll pairs=0;
   for(int i=0;i<m;i++){
       pairs+=NoOfPairs(X[i], Y, n, count);
   }
   return pairs;
}