//Given number N check if it is prime or not.
/*
    Expected Time Complexity : O(N^1/2)
    Expected Auxilliary Space :  O(1)

    Constraints : 1 <= N <= 10^9
*/

#include<iostream>
#include<cmath>

bool isPrime(int n){
    if(n==1) return false;
    else if(n==2 || n==3) return true;
    else if(n%2==0 || n%3==0) return false;

    for (int i = 5; i <= sqrt(n); i+=6)
    {
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;    
}
 
int main(){
    int n;
    std::cin>>n;
    if(isPrime(n))  std::cout<<"Yes"<<std::endl;
    else std::cout<<"No"<<std::endl;
    return 0;
}