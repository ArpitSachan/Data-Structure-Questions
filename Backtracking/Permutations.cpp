#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


void permute(string s, ll i){
	if(i==s.length()){
		cout<<s<<endl;
	}

	for(ll j=i;j<s.length();j++){
		swap(s[i], s[j]);
		permute(s, i+1);
		swap(s[i], s[j]);
	}
}
int main(){

	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	string s;
	cin>>s;

	permute(s, 0);

	return 0;
}


