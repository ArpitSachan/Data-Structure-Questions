class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int count[256];
        memset(count, -1, sizeof(count));
        int j=0;
        int res=0;
        int maxEnd=0;
        for(int i=0;i<n;i++){
                j=max(j, count[s[i]]+1);
                maxEnd=i-j+1;
                res=max(res, maxEnd);
            count[s[i]]=i;
        }
            return res;
    }

};