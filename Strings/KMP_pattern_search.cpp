void computeLPSArray(string pat, int M, int* lps) 
{ 
    
    int i=1;
    int len=0;
    lps[0]=0;
    while(i<M){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len==0) {
                lps[i]=0;
                 i++;
            }
            else{
                len=lps[len-1];
            }
           
        }
    }
} 

// Returns true if pat found in txt
bool KMPSearch(string pat, string txt) {
    int n=txt.length();
    int m=pat.length();
    
    int lps[m];
    computeLPSArray(pat, m, lps);
    
    int i=0, j=0;
    while(i<n){
        if(pat[j]==txt[i]){
            i++;
            j++;
        }
        if(j==m) {
            return true;
            j=lps[j-1]; 
            }
        else if(i<n && pat[j]!=txt[i]){
            if(j==0){i++;}
            else j=lps[j-1];
        }
    }
    return false;
}