//Given a number N and a bit number K, check if Kth bit of N is set or not. A bit is called set if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.
/*
    Expected Time Complexity: O(LogN).
    Expected Auxiliary Space: O(1).

    Constraints : 
        1 ≤ N ≤ 10^9
        0 ≤ K ≤ floor(log2(N) + 1)
*/
#include<iostream>

bool checkKthBit(int n, int k){
    return (n & (1<<k));
}

int main(){
    int n,k;
    std::cin>>n>>k;
    if(checkKthBit(n,k)) std::cout<<"Yes";
    else std::cout<<"No";
    return 0;
}