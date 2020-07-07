int closer(int a[],int n, int x)
{
    int l=0, h=n-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==x)
          return mid;
        if(a[mid]>x){
            if(a[mid+1]==x)
              {return mid+1;
              break;}
              else h=mid-1;
        }else if(a[mid]<x){
             if(a[mid-1]==x)
              {return mid-1;
              break;}
              else l=mid+1;
        }
    }
    return -1;
}