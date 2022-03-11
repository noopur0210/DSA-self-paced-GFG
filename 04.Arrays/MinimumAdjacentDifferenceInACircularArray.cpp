//Given an array Arr of n integers arranged in a circular fashion. Your task is to find the minimum absolute difference between adjacent elements.
/*
    Expected Time Complexity: O(n).
    Expected Auxiliary Space: O(1).

    Constraint:
        2 <= n <= 10^6
        -10^6 <= Arr[i] <= 10^6
*/
#include<iostream>
#include<cmath>

int minAdjDiff(int arr[], int n){
    int minDiff=abs(arr[0]-arr[n-1]);
    for(int i=0; i<n-1; i++)
        minDiff = std::min(minDiff, abs(arr[i] - arr[i+1]));
    
    return minDiff;
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)  std::cin>>arr[i];
    std::cout<<minAdjDiff(arr,n);

    return 0;
}