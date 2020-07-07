int next(int gap){
    if(gap<=1)
      return 0;
    return gap/2+gap%2;
}
void merge(int a1[], int a2[], int m, int n) 
{
    int i,j;
    int gap=n+m;
    for(gap=next(gap);gap>0;gap=next(gap)){
        for(i=0;i+gap<m;i++){
            if(a1[i]>a1[i+gap])
              swap(a1[i], a1[i+gap]);
        }
        for(j=gap>m?gap-m:0;i<m&&j<n;j++,i++){
            if(a1[i]>a2[j])
              swap(a1[i], a2[j]);
        }
        if(j<m){
        for(j=0;j+gap<n;j++){
            if(a2[j]>a2[j+gap])
              swap(a2[j], a2[j+gap]);
        }
        }
        }
   
}
