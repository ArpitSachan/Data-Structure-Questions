int search( int n,int m, int x, int mat[SIZE][SIZE])
{
    int j=m-1, i=0;
    while(j>=0 && i<n){
        if(mat[i][j]==x)
          return 1;
        else if(mat[i][j]>x)j--;
        else i++;
    }
    return 0;
}