int priority(char c){
    if(c=='^') return 3;
    else if(c=='/' || c=='*') return 2;
    else if(c=='+' || c=='-') return 1;
    else return -1;
}
string infixToPostfix(string s)
{
    stack<char> st;
    string ans="";
    st.push('N');
    
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            ans+=s[i];
        }
        else if(s[i]=='(') st.push('(');
        else if(s[i]==')'){
            while(st.top()!='N' && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            if(st.top()=='(')
            {
                st.pop();
            }
        }
        else{
            while(st.top()!='N' && priority(s[i])<=priority(st.top())){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(st.top()!='N'){
        ans+=st.top();
        st.pop();
    }
    return ans;
}