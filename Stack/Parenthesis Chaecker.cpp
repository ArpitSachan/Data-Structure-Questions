bool comp(char a, char b){
    if(a==')' && b=='(') return true;
    else if(a=='}' && b=='{') return true;
    else if(a==']' && b=='[') return true;
    
    return false;
}
bool ispar(string x)
{
    stack<char> s;
    for(char ans: x){
        if(ans=='(' || ans=='{' || ans=='['){
            s.push(ans);
        }else{
            if(s.empty() || !comp(ans, s.top())) return false;
            else s.pop();
        }
    }
    if(!s.empty()) return false;
    return true;
}