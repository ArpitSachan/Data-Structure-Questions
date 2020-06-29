void subset(vector<string> &v, string s, string curr, int index)
{
    if(index==s.length()){
       v.push_back(curr);
        return;
    }

    subset(v, s, curr, index+1);
    subset(v, s, curr+s[index], index+1);

}
vector <string> powerSet(string s)
{
  vector<string> v;
  string curr="";
  subset(v, s, curr, 0);
  return v;
}
