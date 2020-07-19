class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> v;
        
    
        vector<string> x;
        int i=0;
        int j;
        while(i<words.size()){
            j=i+1;
            int count=words[j-1].length();
            while(j<words.size() && count+words[j].length()+(j-i-1)<maxWidth) {
                count+=words[j].length();
                j++;
            }
                if((j-i)==1 || j>=words.size()){
                    int spaces=maxWidth-j-i-1-count;
                    string temp="";
                    temp+=words[i];
                    for(int k=i+1;k<j;k++){
                    temp+=" "+words[k];
                    }
                    for(int k=temp.length();k<maxWidth;k++) temp+=" ";
                    v.push_back(temp);
                }
                else{
                    int spaces=maxWidth-count;
                    int minSpaces=spaces/(j-i-1);
                    int extraSpaces=spaces%(j-i-1);
                    string temp="";
                    temp+=words[i];
                    for(int k=i+1;k<j;k++){
                        int x=minSpaces;
                        while(x--){
                            temp+=" ";
                        }
                        if(extraSpaces>0){
                            temp+=" ";
                            extraSpaces--;
                        }
                        temp+=words[k];
                    }
                    v.push_back(temp);
                }
            i=j;
        }
        return v;
    }
};