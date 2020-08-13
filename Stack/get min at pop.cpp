stack<int> _push(int a[],int n)
{
   stack<int> s;
   for(int i=0;i<n;i++){
       s.push(a[i]);
   }
   return s;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    vector<int> v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    stack<int> as;
    s.push(v.back());
    as.push(v.back());
    
    int n=v.size();
    for(int i=n-2;i>=0;i--){
        if(v[i]<=as.top()){
            as.push(v[i]);
        }
        s.push(v[i]);
    }
    while(!s.empty()){
        cout<<as.top()<<" ";
        if(s.top()==as.top()){
            as.pop();
        }
        s.pop();
    }
    
}