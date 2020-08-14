int tour(petrolPump p[],int n)
{
   int st=0;
   int curr_pet=0;
   int prev_pet=0;
   
   for(int i=0;i<n;i++){
       curr_pet+=p[i].petrol-p[i].distance;
       if(curr_pet<0){
           prev_pet+=curr_pet;
           st=i+1;
           curr_pet=0;
       }
   }
   return ((curr_pet+prev_pet)>=0?st:-1);
}
