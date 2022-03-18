//Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
/*
    Expected Time Complexity: O(N)
    Expected Auxiliary Space: O(N)

    Constraints:
        1 ≤ N, K ≤ 10^7
        1 ≤ A[i] ≤ 10^18
*/
#include<iostream>
#include<vector>
#include<algorithm>

void reverseInGroups(std::vector<long long>& arr, int n, int k){
    
    //dividing array in subarrays of size k
    for(int i=0; i<n; i+=k){
        int left=i;
        int right = std::min(i+k-1, n-1);   //handling cases where k not a multiple of n

        while(left<right)
            std::swap(arr[left++],arr[right--]);
    }
}

int main(){
    int n,k;
    long long x;
    std::cin>>n>>k;
    std::vector<long long> v;
    for(int i=0; i<n; i++){
        std::cin>>x;
        v.push_back(x);
    }
    reverseInGroups(v,n,k);
    for(int i=0; i<n; i++)  std::cout<<v[i]<<" ";
    return 0;
}