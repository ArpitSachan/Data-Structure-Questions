int maxWater(int a[], int n) 
{ 
    int l=0, h=n-1;
    int water=0;
    int maxi=0;
    while(l<h){
        maxi=max(maxi, (h-l-1)*(min(a[l], a[h])));
        if(a[l]<a[h])
          l++;
        else
         h--;
    }
    return maxi;
} 
