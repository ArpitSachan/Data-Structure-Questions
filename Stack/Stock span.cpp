vector <int> calculateSpan(int price[], int n)
{
    stack<int> s;
    vector<int> v;
   for(int i=0;i<n;i++){
       if(s.empty()){
           v.push_back(i+1);
           s.push(i);
       }else{
           while(!s.empty() && price[s.top()]<=price[i]){
               s.pop();
           }
           if(s.empty()){
               v.push_back(i+1);
           }else v.push_back(i-s.top());
           
           s.push(i);
       }
   }
   return v;
}