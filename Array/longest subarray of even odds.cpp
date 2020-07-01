int maxEvenOdd(int arr[], int n) 
{ 
   int res=1;
   int curr=1;
   for(int i=0;i<n-1;i++){
       if(a[i]%2==0 && a[i+1]%2!=0 || a[i]%2!=0 && a[i+1]%2==0){
           curr++;
           
       }else{
           curr=1;
       }
       res=max(res, curr);
   }
   return res;
} 