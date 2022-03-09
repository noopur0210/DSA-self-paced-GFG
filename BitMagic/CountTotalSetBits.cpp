//You are given a number N. Find the total count of set bits for all numbers from 1 to N (both inclusive).
/*
    Expected Time Complexity: O(log N).
    Expected Auxiliary Space: O(1).

    Constraints : 1 ≤ N ≤ 10^8
*/

#include<iostream>
#include<cmath>

int setBitsIn(int i){
    int c=0;
    while(i>0){
        c+=(i&1);
        i = i>>1;
    }
    return c;
}

//Time Complexity : O(NlogN)
int countSetBits(int n)
{
    int count=0;
    for(int i=1; i<=n; i++){
        count+=setBitsIn(i);
    }
    return count;
}
 
int main(){
    int n;
    std::cin>>n;
    std::cout<<countSetBits(n);
    return 0;
}