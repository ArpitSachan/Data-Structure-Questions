class Solution {
public:
    bool isNumber(string s) {
        int i=0;
        bool digit=false;
        bool decimal=false;
        bool sign=false;
        bool exp=false;
        while(i<s.length() && s[i]==' ')
           i++;

        for(;i<s.length();i++){
            if(isdigit(s[i])){
                digit=true;
            }else if(s[i]=='.')
            {
                if(exp) return false;
                if(decimal) return false;
                 decimal=true;
            }
            else if(s[i]=='+'||s[i]=='-'){
                if(digit || decimal) return false;
                else if(sign) return false;
                sign=true;
            }
            else if(s[i]=='e'){
                if(!digit) return false;
                if(exp) return false;
                exp=true;
                digit=false;
                sign=false;
                decimal=false;
            }else break;
        }
        while(i<s.length() && s[i]==' ')
            i++;
        if(i==s.length()) return digit;
        return false;
    }
};