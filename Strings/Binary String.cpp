long binarySubstring(int n, string a){
    long count=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1')
         count++;
    }
    return (count*(count-1))/2;
}
