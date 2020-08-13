long getMaxArea(long long a[], int n){
    
    stack<long long> s;
    long long res=0;
    long long curr;
    for(int i=0;i<n;i++){
      while(!s.empty() && a[s.top()]>=a[i]){
          int j=s.top();
          s.pop();
          curr=a[j]*(s.empty()?i:(i-1-s.top()));
          res=max(res, curr);
      }   
      s.push(i);
    }
    while(!s.empty()){
        int j=s.top();
        s.pop();
        curr=a[j]*(s.empty()?n:(n-s.top()-1));
        res=max(res, curr);
    }
    return res;
}