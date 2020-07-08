void cofactor(int mat[N][N], int temp[N][N], int r, int c, int n){
    int row=0, col=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=r && j!=c)
             {
                 temp[row][col++]=mat[i][j];
             }
            if(col==n-1){
            
                row++;
        col=0;
            }
        }
        
    }
}
int determinantOfMatrix( int mat[N][N], int n)
{
    int d=0;
    if(n==1)
      return mat[0][0];
      int temp[N][N];
      
      int flag=1;
      
      for(int i=0;i<n;i++){
          cofactor(mat, temp, 0, i, n);
          d+=flag*mat[0][i]*determinantOfMatrix(temp, n-1);
          
          flag=-flag;
      }
      return d;
}