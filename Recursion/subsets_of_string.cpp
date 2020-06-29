void subset(string str, string curr="", int index = 0){
if(index==n)
    cout<<curr<<" ";
subset(str, curr, index+1);
subset(str, curr+str[index], index+1);
}
