bool isRotated(string str1, string str2)
{
    bool flag=true;
    if(str1.length()!=str2.length()) flag=false;
    else if(str1.length()==1 || str1.length()==2)
    {
        for(int i=0;i<str1.length();i++){
            if(str1[i]!=str2[i])
             flag=false;
        }
    }
    else if(str1[0]==str2[str1.length()-2] && str1[1]==str2[str1.length()-1]) 
    {
    for(int i=2;i<str1.length();i++)
    {
        if(str1[i]!=str2[i-2])
          flag=false;
    }
    }
    else if(str2[0]==str1[str2.length()-2] && str2[1]==str1[str2.length()-1]){
        for(int i=2;i<str1.length();i++)
    {
        if(str2[i]!=str1[i-2])
          flag=false;
    }
    }
    else flag=false;
    return flag;
}