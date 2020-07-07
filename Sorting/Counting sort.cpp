#define loop(x, n) for(int i=x;i<n;i++)
char* countSort(char a[])
{
    char output[strlen(a)];
    int count[RANGE+1];
    
    loop(0, RANGE) count[i]=0;
    
    loop(0, strlen(a)) count[a[i]]++;
    
    loop(1, RANGE) count[i]+=count[i-1];
    
    loop(0, strlen(a)){
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    loop(0, strlen(a)) a[i]=output[i];
    
    return a;
    
}