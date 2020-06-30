int trappingWater(int a[], int n){

   int l=0, h=n-1;
   int res=0;
   int l_max=0;
   int r_max=0;
   
   while(l<=h){
       if(a[l]<a[h]){
           if(a[l]<l_max){
             res+=l_max-a[l];
       }else{
           l_max=a[l];
       }
       l++;
       }else{
           if(a[h]<r_max){
               res+=r_max-a[h];
           }else{
               r_max=a[h];
           }
           h--;
       }
   }
   return res;
  
}