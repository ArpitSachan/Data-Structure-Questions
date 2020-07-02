#include <bits/stdc++.h>
using namespace std;

int right(int a[], int n, int x){
 
    int l=0,h=n-1;
    int res=-1;
    while (l<=h) { 
        int mid=l+(h-l)/2; 
        if(a[mid]>x) h=mid-1;
        
        else if(a[mid] < x) l=mid+1; 
        else { 
            res=mid; 
            l=mid+1; 
        } 
    } 
    return res; 
}
int left(int a[], int n, int x){
    int l=0, h=n-1, res=-1; 
     while (l<=h) { 
        int mid=l+(h-l)/2; 
        if(a[mid]>x) h=mid-1;
        
        else if(a[mid] < x) l=mid+1; 
        else { 
            res=mid; 
            h=mid-1; 
        } 
    } 
    return res; 
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int l=0, h=n-1;
	    pair<int, int> x;
	    while(l<=h){
	        int mid=l+(h-l)/2;
	        if(a[mid]==a[mid-1]||a[mid]==a[mid+1]){
	          x.first=a[mid];
	          break;
	        }else if(a[mid]==a[0]+mid){
	                l=mid+1;
	            }
	       else{
	                h=mid-1;
	            }
	        }
	        x.second=(right(a, n, x.first)-left(a, n, x.first))+1;
	    cout<<x.first<<" "<<x.second<<endl;
	}
	
	return 0;
}