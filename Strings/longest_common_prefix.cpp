class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
     int n=v.size();
        if(n==0)
            return "";
       if(n==1)
        return v[0];
        string temp= v[0];
        
        for(int i=1;i<n;i++){
            int j=0;
            while(j<v[i].length()&&j<temp.length()&&v[i][j]==temp[j]){
                j++;
            }
            if(j==0)
                 return "";
            else temp=v[i].substr(0,j);
        }
       return temp;
    }
};