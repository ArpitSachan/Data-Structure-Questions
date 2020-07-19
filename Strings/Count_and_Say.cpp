class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string last_num = countAndSay(n-1);
        int count=1;
        string res="";
        for(int i=0;i<last_num.length();i++){
            if(last_num[i]==last_num[i+1]){
                count++;
            }
            else{
                res+=to_string(count);
                count=1;
                res+=last_num[i];
            }
        }
        return res;
    }
};