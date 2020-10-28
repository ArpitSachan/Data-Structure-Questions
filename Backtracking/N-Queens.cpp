#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll sol[100][100];
bool safe(ll n, ll sol[][100], ll i, ll j){
	for(ll k=0;k<i;k++){
		if(sol[k][j]==1) return false;
	}
	ll k=i-1, l=j-1;
	while(k>=0 && l>=0){
		if(sol[k][l]==1) return false;
		k--;
		l--;
	}
	k=i, l=j;
	while(k>=0 && l<n){
		if(sol[k][l]==1) return false;
		k--;
		l++;
	}

	return true;
}
bool fill(ll n, ll sol[][100], ll i){
	if(i==n){
		for(ll k=0;k<n;k++){
			for(ll j=0;j<n;j++){
				if(sol[k][j]) cout<<"Q ";
				else cout<<"- ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	for(ll j=0;j<n;j++){
		if(safe(n, sol, i, j)){
			sol[i][j]=1;
			if(fill(n, sol, i+1)) return true;
			else sol[i][j]=0;
		}
	}
	return false;

}
void solve(){
	ll n; cin>>n;
	sol[n][n]={0};

	fill(n, sol, 0);
	cout<<endl;
}
int main(){

	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	solve();
}

