bool myComp(pair<int, int>a, pair<int, int> b){
    if(a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}
vector<int> sortByFreq(int a[],int n)
{
    unordered_map<int, int> mp;
    vector<pair<int, int>> v;
    
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        int k=it->second;
        while(k--){
            v.push_back({it->first, it->second});
        }
    }
    sort(v.begin(), v.end(), myComp);
    vector<int> x;
    for(int i=0;i<n;i++){
        x.push_back(v[i].first);
    }
    return x;
}