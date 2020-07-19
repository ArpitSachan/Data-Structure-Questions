class Solution {
public:
    string addition(string a,string b){
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans="";
        int i;
        i=0;
        int carry=0;
        while(i<a.length()&&i<b.length()){
            int x=(a[i]-'0')+(b[i]-'0');
            x+=carry;
            carry=x/10;
            ans=(char)('0'+x%10)+ans;
            i++;
        }
        while(i<a.length()){
            int x=(a[i]-'0')+carry;
            carry=x/10;
            ans=(char)('0'+x%10)+ans;
            i++;
        }
        while(i<b.length()){
            int x=(b[i]-'0')+carry;
            carry=x/10;
            ans=(char)('0'+x%10)+ans;
            i++;
        }
        while(carry){
            ans=(char)('0'+carry%10)+ans;
            carry/=10;
        }
        return ans;
    }
    string multiplyit(string num1, char n){
        string res="";
        int carry=0;
        for(int i=0;i<num1.length();i++){
            int x=(num1[i]-'0')*(n-'0');
            x=x+carry;
            if(to_string(x).length()==2) carry=x/10;
            else carry=0;
            res+=to_string(x%10);
        }
        if(carry!=0) res+=to_string(carry);
        reverse(res.begin(), res.end());
        return res;
    }
    string multiply(string num1, string num2) {
        if(num1=="0" ||num2=="0")
           return "0";
        string ans="";
        string zero="";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for(int i=0;i<num2.length();i++){
            string temp=multiplyit(num1, num2[i]);
            temp+=zero;
            ans=addition(ans, temp);
            zero+='0';
        }
        
        return ans;
    }
};