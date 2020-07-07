vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
{ 
    int n=A.size();
    int m=B.size();
    int p=C.size();
    vector<int> v; 
  int i=0, j=0, k=0;
  while(i<n && j<m &&k<p){
     int res=min(min(A[i], B[j]), C[k]);
     if(res==A[i]) i++;
     else if(res==B[j]) j++;
     else k++;
     v.push_back(res);
        
  }
  while(i<n&&j<m){
      if(A[i]<=B[j])
      {
          v.push_back(A[i]);
          i++;
          
      }else{
          v.push_back(B[j]);
          j++;
      }
  }
  while(j<m&&k<p){
      if(B[j]<=C[k])
      {
          v.push_back(B[j]);
          j++;
          
      }else{
          v.push_back(C[k]);
          k++;
      }
  }
  while(i<n&&k<p){
      if(A[i]<=C[k])
      {
          v.push_back(A[i]);
          i++;
          
      }else{
          v.push_back(C[k]);
          k++;
      }
  }
  while(i<n){
      v.push_back(A[i]);
      i++;
  }
  while(j<m){
      v.push_back(B[j]);
      j++;
  }
  while(k<p){
      v.push_back(C[k]);
      k++;
  }
 
  return v;
} 
