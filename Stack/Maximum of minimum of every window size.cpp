vector <int> printMaxOfMin(int a[], int n) {
    
    int prev[n];
    int next[n];
    vector<int> v(n);
    stack<int> s;
    prev[0]=-1;
    s.push(0);
    for(int i=1;i<n;i++){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        prev[i]=s.empty()?-1:s.top();
        s.push(i);
    }
    while(!s.empty()) s.pop();
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        next[i]=s.empty()?n:s.top();
        s.push(i);
    }
    for(int i=0;i<n;i++) v[i]=-1;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        int x=next[i]-prev[i]-1;
        if(x>=n){
            mini=a[i];
        }else{
            v[x-1]=max(v[x-1], a[i]);
        }
    }
    for(int i=n-1;i>=0;i--){
        mini=max(mini, v[i]);
        v[i]=mini;
    }
    return v;
}