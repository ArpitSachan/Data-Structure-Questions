int subArraySum(int a[], int n, int sum)
{
    unordered_map<int, int> mp;
    mp[a[0]]++;
    int count=0;
    if(a[0]==sum) count++;
    for(int i=1;i<n;i++){
        a[i]+=a[i-1];
        if(a[i]==sum) count++;
        
        unordered_map<int, int>::iterator x;
        x=mp.find(a[i]-sum);
        
        if(x!=mp.end()) count+=x->second;
        mp[a[i]]++;
    }
    return count;
}