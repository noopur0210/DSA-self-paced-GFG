//Given an array arr[] of size N and two elements x and y, use counter variables to find which element appears most in the array, x or y. If both elements have the same frequency, then return the smaller element.
/*
    Expected Time Complexity: O(N)
    Expected Auxiliary Space: O(1)

    Constraints:
        1 <= n <= 10^3
        0 <= arr[i], x, y <= 10^8
*/
#include<iostream>

int majorityWins(int A[], int n, int x, int y){
    int cx=0, cy=0;
    for(int i=0; i<n; i++){
        if(A[i]==x) cx++;
        if(A[i]==y) cy++;
    }
    if(cx==cy) return std::min(x,y);
    else return (cx>cy)?x:y;
}

int main(){
    int n, x, y;
    std::cin>>n;
    int A[n];
    for(int i=0; i<n; i++)  std::cin>>A[i];
    std::cin>>x>>y;
    std::cout<<majorityWins(A,n,x,y);
    return 0;
}