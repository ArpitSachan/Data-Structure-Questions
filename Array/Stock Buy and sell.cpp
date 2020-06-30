#include <bits/stdc++.h>
using namespace std;
 
struct Interval
{
    int buy;
    int sell;
};

void stockBuySell(int a[], int n)
{
   
   int i=0;
   vector<Interval> v;
   while(i<n-1){
       int j=i;
       int buy=i;
       int l_min=a[i];
       int l_max=0;
       while(j<n && a[i]>=a[j]){
          if(l_min>=a[j]){
              l_min=a[j];
              buy=j;
          }
           j++;
       }
       int k=i+1;
       int sell=buy;
       while(k<n && a[k]>=a[k-1])
       {
           if(l_max<=a[k]){
               l_max=a[k];
               sell=k;
           }
           k++;
       }
      if(a[buy]!=a[sell]  &&buy<sell){
      v.push_back({buy, sell});
          
      }
      if(a[buy]==a[sell])
      {
          i++;
      }else
        i =sell+1;
   }
   if(!v.empty())
   for(int i=0;i<v.size();i++){
      
       cout<<"("<<v[i].buy<<" "<<v[i].sell<<")"<<" ";
   }else cout<<"No Profit";
    
}
int main()
{   
    
    int price[10000],n,i,T;
    
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    stockBuySell(price, n);
    cout<<endl;
    }
    return 0;
} 