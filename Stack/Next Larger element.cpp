#define ll long long
vector <long long> nextLargerElement(long long a[], int n){
    vector<ll> v(n);
    stack<ll> s;
    for(int i=n-1;i>=0;i--){
             while(!s.empty() && s.top()<=a[i]){
                 s.pop();
             }
             if(s.empty()) v[i]=-1;
             else v[i]=s.top();
             
              s.push(a[i]);
         }
        
    return v;
}