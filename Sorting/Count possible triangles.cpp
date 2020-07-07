#define ll long long

ll findNumberOfTriangles(ll n)
{
    sort(arr, arr+n);
    ll count=0;
    
    for(ll i=0;i<n-2;i++){
        ll l=i+1;
        ll h=n-1;
        while(l<h){
            if(arr[l]+arr[h]>arr[i]){
                count+=h-l;
                h--;
            }else{
                l++;
            }
        }
    }
    return count;
}