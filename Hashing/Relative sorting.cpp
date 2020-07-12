#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++) { cin>>a[i]; mp[a[i]]++;}
        for(int i=0;i<m;i++) cin>>b[i];
        
        int j=0;
        unordered_map<int, int>::iterator x;
        for(int i=0;i<m;i++){
            x=mp.find(b[i]);
            if(x!=mp.end()){
                int k=mp[b[i]];
                while(k--){
                    a[j++]=x->first;
                    mp.erase(b[i]);
                }
            }
        }
        int k=j;
        for(auto it=mp.begin();it!=mp.end();it++){
            int l=it->second;
            while(l--)
             a[j++]=it->first;
        }
        sort(a+k, a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}