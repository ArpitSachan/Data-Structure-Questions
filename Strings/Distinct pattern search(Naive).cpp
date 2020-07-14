bool search(string pat, string txt) 
{ 
	int n=txt.length();
	int m=pat.length();
	
	for(int i=0;i<=n-m;){
	    int j;
	    for(j=0;j<m;j++){
	        if(pat[j]!=txt[i+j]) break;
	    }
	    if(j==m) return true;
	    if(j==0) i++;
	    else i=i+j;
	}
	return false;
} 