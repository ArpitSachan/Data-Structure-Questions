#define ll long long
long long int countSubarrWithEqualZeroAndOne(int a[], int n)
{
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        if(a[i]==0) a[i]=-1;
    }
    int curr=0, count=0;
    for(int i=0;i<n;i++){
        curr+=a[i];
        if(curr==0) count++;
        if(mp.find(curr)!=mp.end()){
            count+=mp[curr];
        }
        mp[curr]++;
    }
    return count;
}