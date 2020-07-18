class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        if(!words.empty()){unordered_map<string, int> mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        vector<int> v;
        int m=words[0].length();
        if(m*words.size()>s.length())
            return v;
        int st=0;
        int end=m;
        int j=0;
        int count=0;
        
        unordered_map<string, int> up;
        up=mp;
        while(j<=s.length()-m*words.size()){
           
            string temp=s.substr(st, m);
            if(up.find(temp)!=up.end() && up[temp]>0){
                count++;
                st+=m;
                up[temp]--;
                
            }else{
                j++;
                st=j;
                count=0;
                up=mp;
            }
            if(count==words.size()){
                v.push_back(j);
                j++;
                st=j;
                count=0;
                up=mp;
            }
        }
        return v;
    }
        else return {};
    }
};