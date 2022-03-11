//Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.
/*
    Expected Time Complexity : O(N^1/2 * N^1/4)
    Expected Auxilliary Space :  O(1)

    Constraints : 1 <= N <= 10^9
*/

#include<iostream>

bool isPrime(int n){
    if(n==1) return false;
    else if(n==2 || n==3) return true;
    else if(n%2==0 || n%3==0) return false;

    for (int i = 5; i*i<=n; i+=6)
    {
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;    
}

int exactly3divisors(int N){
    int count=0;

    //Numbers that have exactly 3 divisors are squares of prime numbers. Therefore, we just have to find the prime numbers which are less than sqrt(N)
    for(int i=2; i*i<=N; i++)
        if(isPrime(i)) count++;

    return count;
}
 
int main(){
    int n;
    std::cin>>n;
    std::cout<<exactly3divisors(n);
    return 0;
}