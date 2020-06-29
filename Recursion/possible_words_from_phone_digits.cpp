const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; //include stl lib
void subset(int a[], char res[], int i, int n)
{
   if(i==n){
       cout<<res<<" ";
       return;
   }
   for(int j=0;j<strlen(hashTable[a[i]]);j++)
   {
       res[i]=hashTable[a[i]][j];
       subset(a, res, i+1, n);
   }
}
void possibleWords(int a[],int n)
{
    char res[n+1] ={'\0'};
    subset(a, res, 0, n);
}
