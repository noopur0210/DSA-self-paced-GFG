//Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.
/*
    Expected Time Complexity: O(Log N)
    Expected Auxiliary Space: O(1)

    Constraints: 1 <= N,K,arr[i] <= 10^6
*/
#include<iostream>

//returns 1 if K is present in the array, else returns -1
int searchInSorted(int A[], int n, int k){
    int l=0, h=n-1;
    while (l<=h)
    {
        int mid = (l+h)/2;
        if(A[mid]==k) return 1;
        else if(A[mid]<k)   l = mid+1;
        else    h = mid-1;
    }
    return -1;    
}

int main(){
    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)  std::cin>>arr[i];
    std::cout<<searchInSorted(arr,n,k);
    return 0;
}