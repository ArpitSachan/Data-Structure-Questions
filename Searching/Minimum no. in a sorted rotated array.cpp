int minNumber(int a[], int l, int h)
{
    if(l>h)
      return a[0];
    if(l==h)
      return a[l];
    
    int mid=l+(h-l)/2;
      
    if(mid<h && a[mid+1]<a[mid]) return a[mid+1];
          
    if(mid>l && a[mid-1]>a[mid]) return a[mid];
          
    if(a[h]>a[mid]) return minNumber(a, l, mid-1);
          
    else return minNumber(a, mid+1, h);
}