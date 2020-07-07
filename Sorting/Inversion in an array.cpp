#define ll long long
#define loop(n) for(int i=0;i<n;i++)
ll merge(ll a[], ll l, ll m, ll h){
    
    ll n1=m-l+1;
    ll n2= h-m;
    ll L[n1];
    ll R[n2];
    ll counter=0;
    
    loop(n1){
        L[i]=a[i+l];
    }
    loop(n2){
        R[i]=a[m+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]) { a[k]=L[i]; i++; }
        
        
        else {
            a[k]=R[j]; j++;
            
        counter+=(n1-i); // since all elements in the right of L[] will be greater than R[j], e won;t get to compre them as we'll do j++ here;
            
        }
        k++;
    }
    while(i<n1){
        a[k++]=L[i++];
    }while(j<n2){
        a[k++]=R[j++];
    }
    return counter;
}
ll mergeSort(ll a[], ll l , ll h){
    ll counter=0;
    if(h>l){
        ll mid=l+(h-l)/2;
        counter+= mergeSort(a, l, mid);
        counter+= mergeSort(a, mid+1, h);
        counter+= merge(a, l, mid, h);
    }
    return counter;
}
ll int inversionCount(ll a[], ll n)
{
    return mergeSort(a, 0, n-1);

}