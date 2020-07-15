int findSum(string str)
{
    int sum=0;
    string temp="";
    
    for(char ch: str){
        if(isdigit(ch)){
            temp.push_back(ch);
        }
        else{
                sum+=atoi(temp.c_str());
                temp="";
        }
    }
    sum+=atoi(temp.c_str());
    return sum;
}