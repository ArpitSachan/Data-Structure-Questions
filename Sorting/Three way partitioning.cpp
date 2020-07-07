vector<int> threeWayPartition(vector<int> A, int a, int b)
{
    int l=0, h=A.size()-1, mid=0;
    while(mid<=h){
        if(A[mid]<a){
            swap(A[l], A[mid]);
            l++;
            mid++;
        }else if(A[mid]>=a && A[mid]<=b){
            mid++;
        }else{
            swap(A[mid], A[h]);
            h--;
        }
    }
    return A;
}
