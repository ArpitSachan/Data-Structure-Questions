void spirallyTraverse(int m, int n, int a[SIZE][SIZE]){
    int top=0, right=n-1, bottom=m-1, left=0;
    
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<a[top][i]<<" ";
        }
        top++;
        if(top>bottom)
          break;
        for(int i=top;i<=bottom;i++){
            cout<<a[i][right]<<" ";
        }
        right--;
        if(right<left) break;
        for(int i=right;i>=left;i--){
            cout<<a[bottom][i]<<" ";
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            cout<<a[i][left]<<" ";
        }
        left++;
    }
}
