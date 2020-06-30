int maxIndexDiff(int a[], int n) 
{ 
  int L[n];
  int R[n];
  L[0]=a[0];
  for(int i=1;i<n;i++){
      L[i]=min(a[i], L[i-1]);
  }
  R[n-1]=a[n-1];
  for(int i=n-2;i>=0;i--){
      R[i]=max(a[i], R[i+1]);
  }
  
  int i=0, j=0;
  int res=-1;
  while(i<n &&j<n){
      if(L[i]<=R[j]){
          res=max(res, j-i);
          j++;
          
      }else{
          i++;
      }
      
  }
  return res;
}