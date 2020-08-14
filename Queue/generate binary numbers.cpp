vector<string> generate(ll n)
{
    vector<string> v;
    queue<string> q;
    q.push("1");
	for(ll i=0;i<n;i++){
	    string curr=q.front();
	    q.pop();
	    v.push_back(curr);
	    q.push(curr+"0");
	    q.push(curr+"1");
	}
	return v;
}