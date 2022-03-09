//Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
/*
    Expected Time Complexity : O(log N).
    Expected Auxiliary Space : O(1).

    Constraints : 0 ≤ N ≤ 10^18
*/
#include<iostream>

bool isPowerOf2(int n){
    
    if(n==0) return false;

    //The numbers which are powers of 2 only have one set bit.
    //If a number n has more than one set bits, the following expression will be false.
    return !(n&(n-1));
}

int main(){
    int n;
    std::cin>>n;
    if(isPowerOf2(n)) std::cout<<"Yes";
    else std::cout<<"No";
    return 0;
}