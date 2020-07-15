void reverseWords(char *s) {
    int n=strlen(s);
    int l=0, h=0;
    while(h<n){
        if(s[h]=='.'){
            reverse(s+l, s+h);
            l=h+1;
        }
        h++;
    }
    reverse(s+l, s+n);
    reverse(s, s+n);
    for(int i=0;i<n;i++) cout<<s[i];
}
