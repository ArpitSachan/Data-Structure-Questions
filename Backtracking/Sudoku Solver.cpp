#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

ll sol[100][100];

bool isRowSafe(ll a[][9], ll i, ll j, ll k){
	for(ll ii=0;ii<9;ii++){
			if(a[i][ii]==k)return false;
	}
	return true;
}
bool isColSafe(ll a[][9], ll i, ll j, ll k){
	for(ll ii=0;ii<9;ii++){
			if(a[ii][j]==k)return false;
	}
	return true;
}
bool isGridSafe(ll a[][9], ll i, ll j, ll k){
	ll x=sqrt(9);
	ll xi=(i/x)*x;
	ll xj=(j/x)*x;

	for(ll ii=xi;ii<xi+x;ii++){
		for(ll jj=xj;jj<xj+x;jj++){
				if(a[ii][jj]==k) return false;
		}
	}
	return true;
}
bool sudoku(ll a[][9], ll i, ll j){
	if(i==9){
		for(ll i=0;i<9;i++){
			for(ll j=0;j<9;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	if(j==9){
		return sudoku(a, i+1, 0);
	}
	if(a[i][j]==0){
	for(ll k=1;k<=9;k++){
		
		if(isRowSafe(a, i, j, k)&&isColSafe(a, i, j, k)&&isGridSafe(a, i, j, k)){
			a[i][j]=k;
			if(sudoku(a, i, j+1)) return true;
		}
	}

	a[i][j]=0;
	return false;}
	else return sudoku(a, i, j+1);
}
void solve(){
	ll a[9][9]={
		{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}
	};

	sudoku(a, 0, 0);
}
int main(){

	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	solve();
}

