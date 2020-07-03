#include <iostream>
using namespace std;

#define loop(n) for(int i=0;i<n;i++) 
#define ll long long
int possible(ll a[], ll n, ll maxx){
    ll students=1;
    ll sum=0;
    loop(n){
        sum+=a[i];
        if(sum>maxx){
            sum=a[i];
            students++;;
        }
    }
    return students;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	     ll n;
	    cin>>n;
	    ll a[n];
	     ll maxi=0;
	    ll sum=0;
	    loop(n){
	        cin>>a[i];
	        sum+=a[i];
	        maxi=max(maxi, a[i]);
	    }
	    ll m;
	    cin>>m;
	   if(n<m)
	     cout<<-1<<endl;
	   else{
	   ll l=maxi, h=sum, res=-1;
	   while(l<=h){
	       ll mid=l+(h-l)/2;
	       if(possible(a, n, mid)<=m){
	           res=mid;
	           h=mid-1;
	       }else{
	           l=mid+1;
	       }
	   }
	   cout<<res<<endl;
	}}
	return 0;
}