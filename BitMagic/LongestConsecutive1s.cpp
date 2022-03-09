//Given a number N. Find the length of the longest consecutive 1s in its binary representation.
/*
    Expected Time Complexity: O(log N).
    Expected Auxiliary Space: O(1).

    Constraints:
    1 <= N <= 10^6
*/
#include<iostream>

int maxConsecutiveOnes(int n){
    
    //LONG APPROACH
    /*
        int maxlen=0,len=0;
        bool prevset=false;
        while(n>0){
                if(!prevset){
                    if(n%2==0)
                        len=0;
                    else {
                        len=1;
                        prevset=true;
                    }
                }
                else{
                    if(n%2!=0) {
                        len++;
                        prevset=true;
                    }
                    else len=0;
                }
                n/=2;
                maxlen = std::max(len,maxlen);
            }
            return maxlen;
    */

   //SIMPLE APPROACH
   int count=0;
   while(n>0){
       n = n & (n<<1);
       count++;
   }
   return count;
    
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<maxConsecutiveOnes(n);
    return 0;
}