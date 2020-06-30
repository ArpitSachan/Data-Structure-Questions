int maxi=a[n-1]+4;
	int i=0, j=n-1;
	
	for(int k=0;k<n;k++){
	    if(k%2==0) {
	        a[k]+=(a[j]%maxi)*maxi;
	        j--;
	    }else{
	        a[k]+=(a[i]%maxi)*maxi;
	        i++;
	    }
	}
	for(int k=0;k<n;k++){
	   a[k]=a[k]/maxi;
	}