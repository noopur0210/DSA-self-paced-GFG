//You are given an array arr(0-based index). The size of the array is given by sizeOfArray. You need to insert an element at given index and print the modified array.
/*
    Expected Time Complexity: O(N).
    Expected Auxiliary Space: O(1).

    Constraints:
        2 <= sizeOfArray <= 10000
        0 <= element, arr[i] <= 10^6
        0 <= index <= sizeOfArray-1
*/
#include<iostream>

void insertAtIndex(int A[], int sizeofarray, int index, int element){
    for(int i=sizeofarray-1; i>index; i--)
        A[i] = A[i-1];
    A[index] = element;
}

int main(){
    int sizeofarray, index, element;
    std::cin>>sizeofarray;
    int Arr[sizeofarray];
    for(int i=0; i<sizeofarray-1; i++)  std::cin>>Arr[i];
    std::cin>>index>>element;
    
    insertAtIndex(Arr, sizeofarray, index, element);
    for(int i=0; i<sizeofarray; i++)   
        std::cout<<Arr[i]<<" ";

    return 0;
}