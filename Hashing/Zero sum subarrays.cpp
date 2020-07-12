#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    unordered_map<int, int> mp;
	    for(int i=0;i<n;i++) cin>>a[i];
	    
	    int curr=0, count=0;
	    for(int i=0;i<n;i++){
	        curr+=a[i];
	        if(curr==0) count++;
	        if(mp.find(curr)!=mp.end()) count+=mp[curr];
	        mp[curr]++;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}