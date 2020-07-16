#define d 256 

/* pat -> pattern 
	txt -> text 
	q -> A prime number 
*/
bool search(string pat, string txt, int q) 
{ 
    int n=txt.length();
    int m=pat.length();
    
    int p=0, t=0;
    int power=1;
    
    for(int i=1;i<m;i++){
        power=(power*d)%q;
    }
    for(int i=0;i<m;i++){
        p=(p*d + pat[i])%q;
        t=(t*d + txt[i])%q;
    }
    
    for(int i=0;i<=n-m;i++){
        if(p==t){
            bool flag=true;
            for(int j=0;j<m;j++){
                if(txt[i+j]!=pat[j]){
                     flag=false;break;
                }
            }
            if(flag) return true;
        }
        if(i<n-m){
            t=((t-txt[i]*power)*d+txt[i+m])%q;
            
            if(t<0) t+=q;
        }
    }
    return false;
} 