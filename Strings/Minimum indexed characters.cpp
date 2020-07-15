int minIndexChar(string str, string patt)
{
    int res=INT_MAX;
    unordered_map<char, int>mp;
    for(int i=0;i<str.length();i++)
    {
        if(mp.find(str[i]) == mp.end()){
            mp[str[i]]=i;
        }
    }
    
    for(int i=0;i<patt.length();i++)
    {
        if(mp.find(patt[i])!=mp.end()){
            res=min(res, mp[patt[i]]);
        }
    }
    return res==INT_MAX?-1:res;
}