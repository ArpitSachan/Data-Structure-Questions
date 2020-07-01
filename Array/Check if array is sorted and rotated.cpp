bool inc(int a[], int n){
    int i=0;
    while(i<n-1 && a[i]<=a[i+1]){
      i++;
    }if(i==n-1)  return false;
    i++;
    while(i<n-1 && a[i]<=a[i+1]){
        i++;
    }if(i==n-1 && a[n-1]<=a[0])
     return true;
     else
      return false;
}
bool dec(int a[], int n){
     int i=0;
    while(i<n-1 && a[i]>=a[i+1]){
      i++;
    }if(i==n-1)  return false;
    i++;
    while(i<n-1 && a[i]>=a[i+1]){
        i++;
    }if(i==n-1 && a[n-1]>=a[0])
     return true;
     else
      return false;
}
bool checkRotatedAndSorted(int arr[], int num){
    return (inc(arr, num) || dec(arr, num));
    
}