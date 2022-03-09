//Given a number N. The task is to check whether it is sparse or not. A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.
/*
    Expected Time Complexity: O(log N).
    Expected Auxiliary Space: O(1).

    Constraints: 1 <= N <= 10^6
*/
#include<iostream>

bool isSparse(int n){
    bool prevset = false;
    while(n>0){
        if(n%2 !=0){
            if(prevset) return false;
            else prevset = true;
        }
        else prevset=false;
        n/=2;
    }
    return true;
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<isSparse(n);
    return 0;
}