#define loop(n) for(int i=0;i<n;i++)
bool find3Numbers(int a[], int n, int x)
{
    sort(a, a+n);
    
    loop(n){
        int l=i+1;
        int h=n-1;
        while(l<h){
            if(a[i]+a[l]+a[h]==x)
              return true;
            else if(a[i]+a[l]+a[h]>x) h--;
            else l++;
        }
    }
    return false;
}