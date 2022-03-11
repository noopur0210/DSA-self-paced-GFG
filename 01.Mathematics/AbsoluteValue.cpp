//You are given an interger I, find the absolute value of the interger I.
/* 
    Expected Time Complexity: O(1)
    Expected Auxiliary Space : O(1)
    Constraints : -10^6 <= I <= 10^6
*/

#include<iostream>
 
int abs(int n){
    return (n<0)?(-1*n):n;
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<abs(n);
    return 0;
}