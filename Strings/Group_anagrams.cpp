class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string, vector<string>> s;
        for(int i=0;i<strs.size();i++){
            
            string temp="";
            for(int j=0;j<strs[i].length();j++){
                count[strs[i][j]-'a']++;
            }
            
            
            s[temp].push_back(strs[i]);
        }
        for(auto it=s.begin();it!=s.end();it++){
            v.push_back(it->second);
        }
        return v;
    }
};