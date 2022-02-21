//Given a temperature in celsius C. You need to convert the given temperature to Fahrenheit.
#include<iostream>

double cToF(int c) {
    return (c*9)/5 + 32;
}

int main(){
    int c;
    std::cin>>c;
    std::cout<<cToF(c);
}