#include <iostream>
using namespace std;

#define loop(x, i, n) for(int x=i;x<n;x++)

int partition(int a[], int l, int h, int n){
    int i=l-1;
    
    int pivot=rand()%(h-l+1)+l;
    swap(a[pivot], a[h]); 
    pivot=h;
    
    loop(j, l, h){
        if(a[j]<a[pivot])
        {
          i++;
          swap(a[j], a[i]);
        }
    }
    
    swap(a[i+1], a[h]);
    return i+1;
}

int KthSmallestElement(int a[], int n, int k){
    int l=0;
    int h=n-1;
    
    while(l<=h){
        
        int p=partition(a, l, h, n);
        
        if(p==k-1){
          return a[p];
          break;
        }
        else if(p>k-1)
        {
            h=p-1;
        }
        else{
            l=p+1;
        }
    }
    return -1;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    loop(i,0, n) cin>>a[i];
	    
	    int k;
	    cin>>k;
	    
	    cout<<KthSmallestElement(a, n, k)<<endl;
	}
	return 0;
}