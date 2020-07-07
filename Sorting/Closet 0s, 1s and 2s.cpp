void segragate012(int a[], int n)
{
   int l=0, h=n-1, mid=0;
   while(mid<=h){
       switch(a[mid]){
           
           case 0: swap(a[l], a[mid]);
           l++;
           mid++;
           break;
           case 1: mid++; break;
           case 2: swap(a[h], a[mid]);
           h--;
           break;
       }
   }
}