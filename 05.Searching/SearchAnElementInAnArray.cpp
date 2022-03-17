//Given an integer array and another integer element. The task is to find if the given element is present in array or not.
/*
    Expected Time Complexity: O(n).
    Expected Auxiliary Space: O(1). 

    Constraints:
        1 <= n,arr[i] <= 10^6
        0 <= x <= 10^5
*/
#include<iostream>

//returns the index of first occurrence of X in the given array, otherwise returns -1
int search(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
        if(arr[i]==x)   return i;
    
    return -1;
}

int main(){
    int n,x;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)  std::cin>>arr[i];
    std::cin>>x;
    std::cout<<search(arr,n,x);
    return 0;
}