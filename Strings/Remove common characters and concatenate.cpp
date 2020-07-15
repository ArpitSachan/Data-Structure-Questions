string concatenatedString(string s1, string s2) 
{ 
    unordered_map<char, int> mp;
    string ans="";
    for(int i=0;i<s2.length();i++){
        mp[s2[i]]=1;
    }
    for(int i=0;i<s1.length();i++){
        if(mp.find(s1[i])==mp.end()){
            ans.push_back(s1[i]);
        }
        else mp[s1[i]]=2;
    }
    for(int i=0;i<s2.length();i++){
        if(mp[s2[i]]==1){
            ans.push_back(s2[i]);
        }
    }
    if(ans=="") return "-1";
    else return ans;
}
