void binSort(int a[], int n)
{
    int l=0, h=n-1;
//   int pivot=(rand()%(h-l+1))+l;
//   swap(a[l], a[pivot]);
   int pivot=0;
   int i=l-1, j=h+1;
   while(1){
       do{
           i++;
       }
       while(a[i]<=pivot);
       
       do{
           j--;
       }while(a[j]>pivot);
       
       if(i>=j) break;
       
       swap(a[i], a[j]);
   }
}