//Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero.
/*
    Expected Time Complexity: O(n^2)
    Expected Auxiliary Space: O(1)

    Constrains:
        1 <= n <= 10^4
        -10^6 <= A[i] <= 10^6
*/
#include<iostream>
#include<algorithm>

bool findTriplets(int a[], int n)
    { 
        std::sort(a, a+n);
        for(int i = 0; i<n; i++)
        {
            int low = i+1, high = n-1;
            while(low<high)
            {
                int sum = a[i] + a[low] + a[high];
                if(sum < 0)
                    low++;
                else if(sum > 0)
                    high--;
                else 
                    return true;
            }
        }
        return false;
    }

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)  std::cin>>arr[i];
    std::cout<<findTriplets(arr,n);
    return 0;
}