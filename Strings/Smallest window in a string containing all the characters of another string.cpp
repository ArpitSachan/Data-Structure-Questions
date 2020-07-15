string smallestWindow (string s, string p){
    int pat[26]={0};
    for(int i=0;i<p.length();i++) pat[p[i]-'a']++;
    
    int l=0, r=0;
    int len=INT_MAX;
    int count=0;
    string res="";
        int st;
    while(r<s.length()){
        pat[s[r]-'a']--;
        if(pat[s[r]-'a']>=0) count++;
        
        while(count==p.length()){
            pat[s[l]-'a']++;
            
            if(len>r-l){
                len=r-l;
                st=l;
               }
               
            if(pat[s[l]-'a']>0){
                count--;
            }
            l++;
        }
        r++;
    }
    
    return len==INT_MAX?"-1":s.substr(st, len+1);
}
