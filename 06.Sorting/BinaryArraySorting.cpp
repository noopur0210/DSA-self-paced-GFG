//Given a binary array A[] of size N. The task is to arrange the array in increasing order.
/*
    Expected Time Complexity: O(N)
    Expected Auxilliary Space: O(1)

    Constraints:
        1 <= N <= 10^6
        0 <= A[i] <= 1
*/
#include<iostream>

void binSort(int a[], int n){
    int i=-1, j=n;
       
    while(true){
        do{
            i++;
        }while(a[i]==0);
           
     	do{
            j--;
        }while(a[j]==1);
           
        if(i>=j){
           return;
        }
           
       std::swap(a[i], a[j]);
   }
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)  std::cin>>arr[i];
    binSort(arr,n);
    for(int i=0; i<n; i++)  std::cout<<arr[i]<<" ";
    return 0;
}