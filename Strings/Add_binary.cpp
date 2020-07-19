class Solution {
public:
    string addBinary(string a, string b) {
        int carry=0;
        int i=0;
        int x;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        string temp="";
        while(i<a.length() && i<b.length()){
            if(a[i]=='1' && b[i]=='1'){
                if(carry==0) x=0;
                else x=1;
                
                carry=1;
            }else if(a[i]=='1' && b[i]=='0' || a[i]=='0' && b[i]=='1')
            {
                if(carry==0) x=1;
                else{
                    x=0; 
                    carry=1;
                }
            }else{
                x=carry;
                carry=0;
            }
            temp+=to_string(x);
            i++;
        }
        while(i<a.length()){
            if(a[i]=='1'){
                if(carry==0) x=1;
                else {
                    x=0;
                    carry=1;
                }
            }else{
                x=carry;
                carry=0;
            }
            temp+=to_string(x);
            i++;
            
        }
         while(i<b.length()){
            if(b[i]=='1'){
                if(carry==0) x=1;
                else {
                    x=0;
                    carry=1;
                }
            }else{
                x=carry;
                carry=0;
            }
            temp+=to_string(x);
            i++;
            
        }
        if(carry!=0) temp+=to_string(carry);
        reverse(temp.begin(), temp.end());
        return temp;
    }
};