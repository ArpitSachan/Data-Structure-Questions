#define MOD 1000000007
int fact(int n){
    if(n==0)
      return 1;
    return (n*fact(n-1))%MOD;
}
int findRank(string s) 
{
    int n=s.length();
    
    int count[256]={0};
    int pre_sum[256]={0};
    // bool vis[26]={false};
    for(int i=0;i<n;i++){
        count[s[i]]++;
        if(count[s[i]]>1) return 0;
    }
    pre_sum[0]=count[0];
    for(int i=1;i<256;i++){
        pre_sum[i]=pre_sum[i-1]+count[i];
    }
    
    long long int res=0;
    for(int i=0;i<n-1;i++){
        int mul=fact(n-i-1);
        res+=pre_sum[s[i]-1]*mul;
        for(int j=s[i];j<256;j++) pre_sum[j]--;
    }
    return res+1;
    
}