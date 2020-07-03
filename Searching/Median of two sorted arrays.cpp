#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i=0;i<n;i++)
int medianOfSortedArrays(int a[], int b[], int n, int m){
    int l=0, h= n;
    while(l<=h){
        int i1=(l+h)/2;
        int i2=((n+m+1)/2) -i1;
        
        int min1 = (i1==n)? INT_MAX:a[i1];
        int max1= (i1==0)? INT_MIN:a[i1-1];
        
        int min2=(i2==m)? INT_MAX:b[i2];
        int max2=(i2==0)? INT_MIN:b[i2-1];
        
        if(max2<=min1 && max1<=min2){
            if((n+m)%2==0) return ((double)max(max1, max2)+min(min1, min2))/2;
            
            else return (double) max(max1, max2);
        }
        else if(max1>min2) h=i1-1;
        
        else l=i1+1; 
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    int b[m];
	     loop(n){
	        cin>>a[i];
	    }
	     loop(m){
	        cin>>b[i];
	    }
	    n<m? cout<<medianOfSortedArrays(a, b, n, m)<<endl: cout<<medianOfSortedArrays(b, a, m, n)<<endl;
	    
	}
	return 0;
}