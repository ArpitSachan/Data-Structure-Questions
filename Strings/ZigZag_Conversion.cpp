class Solution {
public:
    string convert(string s, int row) {
        int n=s.length();
        if(row==1) return s;
        string res="";
        int x=2*row-2;
        for(int i=0;i<row;i++){
            for(int j=0;j+i<n;j+=x){
                res+=s[j+i];
                if(i!=0 &&i!=row-1&&j+x-i<n){
                    res+=s[j+x-i];
                } 
            }
        }
        return res;
        }
};