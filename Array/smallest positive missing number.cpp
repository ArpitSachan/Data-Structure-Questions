int missingNumber(int a[], int n) { 
       bool one=false;
       for(int i=0;i<n;i++){
           if(a[i]==1){
               one=true;
           }else if(a[i]<=0 || a[i]>n){
               a[i]=1;
           }
       }
       if(!one){
           return 1;
       }
        for(int i=0;i<n;i++){
               if(a[abs(a[i])-1]>0){
                   a[abs(a[i])-1]=-1*a[abs(a[i])-1];
               }
           }
        for(int i=0;i<n;i++){
               if(a[i]>0){
                   return i+1;
               }
               }
               return n+1;
} 