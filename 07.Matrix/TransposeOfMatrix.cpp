//Write a program to find the transpose of a square matrix of size N*N.
/*
    Expected Time Complexity: O(N * N)
    Expected Auxiliary Space: O(1)

    Constraints:
        1 <= N <= 100
        -10^3 <= mat[i][j] <= 10^3
*/
#include<iostream>
#include<vector>
using namespace std;

void transpose(vector<vector<int> >& matrix, int n){ 
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main(){
    int n,x;
    cin>>n;
    vector<vector<int>> A;
    for(int i=0; i<n; i++){
        vector<int> a;
        for(int j=0; j<n; j++){
            cin>>x;
            a.push_back(x);
        }
        A.push_back(a);
    }
    transpose(A,n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}