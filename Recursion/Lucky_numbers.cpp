bool isLucky(int n, int &counter) {

   if(counter<=n){
       if(n%counter==0){
           return false;
       }
       n=n-n/counter;
       counter++;
       isLucky(n,counter);
   }else{
       return true;
   }
}
