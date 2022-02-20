//You are given an interger I, find the absolute value of the interger I.
#include<iostream>
 
int abs(int n){
    return (n<0)?(-1*n):n;
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<abs(n);
}