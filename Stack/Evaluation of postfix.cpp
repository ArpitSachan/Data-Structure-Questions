int evaluatePostfix(string &str)
{
    stack<int> s;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' &&str[i]<='9'){
            s.push(str[i]-'0');
        }else{
            if(str[i]=='*'){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a*b);
            }else if(str[i]=='/'){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b/a);
            }else if(str[i]=='+'){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(a+b);
            }else if(str[i]=='-'){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                s.push(b-a);
            }
        }
    }
    return s.top();
}