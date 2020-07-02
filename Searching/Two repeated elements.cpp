#define loop(n) for(int i=0;i<n;i++)
void twoRepeated(int a[], int n){
    
    loop(n+2){
        if(a[abs(a[i])]>0)
         a[abs(a[i])]=-a[abs(a[i])];
        else
         cout<<abs(a[i])<<" ";
          
    }
    // loop(n+2){
    //     a[i]--;
    // }
    // loop(n+2){
    //     a[a[i]%n]=a[a[i]%n]+n;
    // }
    // loop(n+2){
    //     if(a[i]/n==2)
    //      cout<<i+1<<" ";
    // }
    
}