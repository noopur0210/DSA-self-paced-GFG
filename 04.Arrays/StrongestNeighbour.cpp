//Given an array arr[] of n positive integers. The task is to find the maximum for every adjacent pairs in the array.
/*
    Expected Time Complexity: O(n).
    Expected Auxiliary Space: O(1).

    Constraints:
        2 <= n <= 10^6
        1 <= arr[i] <= 10^6
*/
#include<iostream>

void maxAdjacent(int A[], int n){
    for(int i=0; i<n-1; i++)
        std::cout<<std::max(A[i], A[i+1])<<" ";
}

int main(){
    int n;
    std::cin>>n;
    int A[n];
    for(int i=0; i<n; i++)  std::cin>>A[i];
    
    maxAdjacent(A,n);
    return 0;
}