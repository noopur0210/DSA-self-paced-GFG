//You are given an array arr. The size of the array is given by sizeOfArray. You need to insert an element at the end.
/*
    Expected Time Complexity: O(1).
    Expected Auxiliary Space: O(1).

    Constraints:
        2 <= sizeOfArray <= 1000
        0 <= element, arr[i] <= 10^6
*/
#include<iostream>

void insertAtEnd(int A[], int sizeofarray, int element){
    A[sizeofarray-1] = element;
}

int main(){
    int sizeofarray, element;
    std::cin>>sizeofarray;

    int Arr[sizeofarray];
    for(int i=0; i<sizeofarray-1; i++)
        std::cin>>Arr[i];
    std::cin>>element;
    
    insertAtEnd(Arr, sizeofarray, element);
    for(int i=0; i<sizeofarray; i++)
        std::cout<<Arr[i]<<" ";
    return 0;
}