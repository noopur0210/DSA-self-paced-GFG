//Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.
/*
    Expected Time Complexity: O(N * N)
    Expected Auxiliary Space: O(N * N) for the resultant list only.

    Constraints:
        1 <= N <= 100
        1 <= mat[i][j] <= 100
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> snakePattern(vector<vector<int> > matrix){   
    vector<int> res;
    
    for(int i=0; i<matrix.size(); i++){
        if(i%2==0){
            for(int j=0; j<matrix[0].size(); j++)
                res.push_back(matrix[i][j]);
        }
        else{
            for(int j=matrix[0].size()-1; j>=0; j--)
                res.push_back(matrix[i][j]);
        }
    }
    return res;
}

int main(){
    int n, x;
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
    vector<int> R = snakePattern(A);
    for(int i=0; i<R.size(); i++)
            cout<<R[i]<<" ";
    return 0;
}