int findPlatform(int a[], int d[], int n)
{
	sort(a, a+n);
	sort(d, d+n);
	int i=0, j=0, curr=0;
	int res=0;
	while(i<n && j<n){
	    if(a[i]<=d[j]){
	        curr++;
	        i++;
	    }else{
	        res=max(res, curr);
	        curr--;
	        j++;
	    }
	}
	return res;
}