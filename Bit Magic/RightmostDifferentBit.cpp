//Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.
/*
    Expected Time Complexity: O(max(log m, log n)).
    Expected Auxiliary Space: O(1).

    Constraints :
        0 <= M <= 10^9
        0 <= N <= 10^9
*/
#include<iostream>

int posOfRightMostDiffBit(int m, int n)
{
    //XOR gives 1 for all cases where m and n are different
    int x = m^n;
    if(x==0) return -1;     //if x=0, it means there were no different digits in m and n 
    int pos=1;
    while(x>0){
        if((x&1)==1) return pos;
        x = x>>1;
        pos++;
    }
    return pos;
}

int main(){
    int m,n;
    std::cin>>m>>n;
    std::cout<<posOfRightMostDiffBit(m,n);
    return 0;
}
