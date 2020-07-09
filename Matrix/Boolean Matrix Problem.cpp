void booleanMatrix(int r, int c, int a[SIZE][SIZE])
{
   int row[SIZE];
   int col[SIZE];
   
   memset(row, 0, sizeof(row));
   memset(col, 0, sizeof(col));
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           if(a[i][j]==1)
             {
             row[i]=1;
             col[j]=1;
             }
       }
   }
   
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           if(row[i]==1) a[i][j]=1;
           if(col[j]==1) a[i][j]=1;
       }
   }
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
}