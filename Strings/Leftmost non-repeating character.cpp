char nonrepeatingCharacter(string s)
{
   int count[26];
   memset(count, 0, sizeof(count));
   int res=INT_MAX;
   for(int i=0;i<s.length();i++){
       count[s[i]-'a']++;
   }
   for(int i=0;i<s.length();i++){
       if(count[s[i]-'a']==1){
         res=i; break;}
   }
   return res==INT_MAX?'$':s[res];
}