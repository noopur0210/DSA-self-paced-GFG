//You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.
/*
    Expected Time Complexity: O(log N).
    Expected Auxiliary Space: O(1).

    Constraints : 1 ≤ A, B ≤ 10^6
*/
#include<iostream>

int countBitsFlip(int a, int b){
    int x = a^b;
    int res=0,k=1;
    while(x>0){
        x = x&(x-1);
        res++;
    }
    return res;
}
 
int main(){
    int A,B;
    std::cin>>A>>B;
    std::cout<<countBitsFlip(A,B);
    return 0;
}