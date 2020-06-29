int rodCutting(int n, int a, int b, int c){
if(n==0)
    return 0;
if(n==1)
    return -1;
int res= max(rodCutting(n-a, a,b,c), rodCutting(n-b, a,b,c), rodCutting(n-c, a,b,c));
return res==-1?-1:res+1;
}
