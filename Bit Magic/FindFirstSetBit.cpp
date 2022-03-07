//Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
//Note: If there is no set bit in the integer N, then return 0 from the function. 
/*
    Expected Time Complexity: O(log N).
    Expected Auxiliary Space: O(1).

    Constraints : 0 <= N <= 10^8
*/

#include<iostream>

unsigned int getFirstSetBit(int n){
    if(n==0) return 0;
    
    int pos=1;
    int m=1;
    while(!(n&m)){
        m = m<<1;
        pos++;
    }

    return pos;
}
 
int main(){
    int n;
    std::cin>>n;
    std::cout<<getFirstSetBit(n);
    return 0;
}