int findLongestConseqSubseq(int a[], int n)
{
   unordered_set<int> s;
  for(int i=0;i<n;i++){
      s.insert(a[i]);
  }
  int res=0;
  for(int i=0;i<n;i++){
       int curr=0;
      if(s.find(a[i]-1)==s.end()){
         
          int x=a[i];
          while(s.find(x)!=s.end()){
              curr++;
              x++;
          }
          res=max(res, curr);
      }
      
  }
  return res;
}