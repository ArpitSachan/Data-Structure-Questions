int findMinOpeartion(int a[][100], int n)
{
    int rowSum[n];
    int colSum[n];
    memset(rowSum, 0, sizeof(rowSum));
    memset(colSum, 0, sizeof(colSum));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            rowSum[i]+=a[i][j];
            colSum[j]+=a[i][j];
        }
    }
    
    int maxSum=0;
    for(int i=0;i<n;i++){
        maxSum=max(maxSum, max(rowSum[i], colSum[i]));
    }
    
    int i=0, j=0;
    int count=0;
    while(i<n && j<n){
        int temp=min(maxSum-rowSum[i], maxSum-colSum[j]);
        
        a[i][j]+=temp;
        rowSum[i]+=temp;
        colSum[j]+=temp;
        
        count+=temp;
        
        if(rowSum[i]==maxSum) i++;
        if(colSum[j]==maxSum) j++;
    }
    return count;
}

