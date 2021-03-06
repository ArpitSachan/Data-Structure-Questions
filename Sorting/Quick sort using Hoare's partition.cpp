#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
int partition (int arr[], int low, int high);
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);
      
        quickSort(arr, low, pi);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
int partition (int a[], int l, int h)
{
   
   int pivot=(rand()%(h-l+1))+l;
   swap(a[l], a[pivot]);
   pivot=l;
   int i=l-1, j=h+1;
   while(1){
       do{
           i++;
       }
       while(a[i]<a[pivot]);
       
       do{
           j--;
       }while(a[j]>a[pivot]);
       
       if(i>=j) return j;
       
       swap(a[i], a[j]);
   }
}
