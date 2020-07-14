int repeatedCharacter (string s) 
{ 
    int count[256];
    memset(count, -1, sizeof(count));
    
    int res=INT_MAX;
    
    for(int i=s.length()-1;i>=0;i--){
        if(count[s[i]]!=-1){
            res=min(res, i);
        }
        count[s[i]]=i;
    }
    return res==INT_MAX?-1:res;
} 