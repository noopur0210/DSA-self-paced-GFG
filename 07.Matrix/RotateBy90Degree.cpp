//Given a square matrix of size N x N. The task is to rotate it by 90 degrees in anti-clockwise direction without using any extra space. 
/*
    Expected Time Complexity: O(N^2)
    Expected Auxiliary Space: O(1)

    Constraints:
        1 ≤ N ≤ 100
        1 <= matrix[][] <= 1000
*/
#include<iostream>
#include<vector>
using namespace std;

void rotateby90(vector<vector<int> >& matrix, int n){ 
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        int low=0, high=n-1;
        while(low<high){
            swap(matrix[low++][i], matrix[high--][i]);
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
    rotateby90(A,n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}