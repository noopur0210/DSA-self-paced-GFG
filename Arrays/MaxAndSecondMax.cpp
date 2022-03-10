//Given an array arr[] of size N of positive integers which may have duplicates. The task is to find the maximum and second maximum from the array, and both of them should be distinct, so If no second max exists, then the second max will be -1.
/*
    Expected Time Complexity: O(N).
    Expected Auxiliary Space: O(1).

    Constraints:
        1 <= N <= 10^6
        1 <= arr[i] <= 10^6
*/
#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> largestAndSecondLargest(int A[], int sizeofarray){
    std::vector<int> v;
    int max1 = -1, max2 = -1;
    for(int i=0; i<sizeofarray; i++){
        if(A[i]>max1){
            max2 = max1;
            max1 = A[i];
        }
        else if(A[i]<max1)
            if(A[i]>max2) max2=A[i];
    }
    v.push_back(max1);
    v.push_back(max2);
    return v;
}

int main(){
    int sizeofarray;
    std::cin>>sizeofarray;
    int A[sizeofarray];
    for(int i=0; i<sizeofarray; i++) std::cin>>A[i];

    std::vector<int> res = largestAndSecondLargest(A, sizeofarray);
    for(int i=0; i<res.size(); i++) std::cout<<res[i]<<" ";
    return 0;
}