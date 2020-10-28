#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back

bool ratinMaze(char maze[10][10], ll soln[10][10], ll i, ll j, ll n, ll m){
	if(i==m-1 && j==n-1){
		soln[i][j]=1;

		for(ll i=0;i<m;i++){
			for(ll j=0;j<n;j++){
				cout<<soln[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}

	if(i>m || j>n) return false;
	if(maze[i][j]=='X') return false;

	soln[i][j]=1;
	if(ratinMaze(maze, soln, i, j+1, n, m) || ratinMaze(maze, soln, i+1, j, n, m)){
		return true;
	}
	else{
	soln[i][j]=0;
	return false;}
	
}
int main(){

	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	#endif
	
	char maze[10][10] ={
		"0000",
		"00X0",
		"000X",
		"0X00",
	};

	ll soln[10][10]={0};
	if(ratinMaze(maze, soln, 0, 0, 4, 4)){
		cout<<"OH YEha"<<endl;
	}else cout<<"Bool Flase"<<endl;


	return 0;
}


