int modified (string a){
    int count=1;
    int res=0;
    
    for(int i=1;i<a.length();i++){
       if(a[i]==a[i-1])
         count++;
        else {
            res+=(count-1)/2;
            count=1;
        }
    }
    res+=(count-1)/2;
    return res;
}