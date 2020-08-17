#include <bits/stdc++.h>
using namespace std;
 
struct Interval
{
    int buy;
    int sell;
};

int buy=0;
    int sell=1;
    
    int profit=0;
    for(int i=1;i<n;i++){
        if(p[i]>p[i-1]){
            profit+=p[i]-p[i-1];
        }
    }
    if(profit>0){
    while(buy<n && sell<n){
        while(sell<n && p[sell]>=p[sell-1]){
            sell++;
        }
        if(buy!=sell-1){
        cout<<"("<<buy<<" "<<sell-1<<")"<<" ";}

        buy=sell;
        while(buy<n-1 && p[buy+1]<=p[buy]) buy++;
        sell=buy+1;
    }
    }
    else{
        cout<<"No Profit";
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
