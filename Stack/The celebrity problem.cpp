int getId(int M[MAX][MAX], int n)
{
    stack<int> s;
    for(int i=0;i<n;i++){
        s.push(i);
    }
    
    int a=s.top();
    s.pop();
    while(!s.empty()){
        int b=s.top();
        s.pop();
        if(M[a][b]) a=b;
    }
    
    for(int i=0;i<n;i++){
        if(i!=a && M[i][a]==0) return -1;
    }
    for(int i=0;i<n;i++){
        if(M[a][i]) return -1;
    }
    
    return a;
    
}