//Given a temperature in celsius C. You need to convert the given temperature to Fahrenheit.
/*
    Expected Time Complexity: O(1)
    Expected Auxiliary Space : O(1)
    Constraints: 1 <= C <= 10^4
*/

#include<iostream>

double cToF(int c) {
    return (c*9)/5 + 32;
}

int main(){
    int c;
    std::cin>>c;
    std::cout<<cToF(c);
    return 0;
}