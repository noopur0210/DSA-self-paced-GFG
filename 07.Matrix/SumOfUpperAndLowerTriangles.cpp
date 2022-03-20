//Given a square matrix of size N*N, print the sum of upper and lower triangular elements. 
/*
    Expected Time Complexity: O(N * N)
    Expected Auxiliary Space: O(1)

    Constraints: 
        1 <= N <= 100
        1 <= matrix[i][j] <= 100
*/
#include<iostream>
#include<vector>
using namespace std;

vector<int> sumTriangles(const vector<vector<int> >& matrix, int n){
    int lower=0, upper=0;
    vector<int> sum;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            if(i<=j) upper+=matrix[i][j];
            if(i>=j) lower+=matrix[i][j];
        }
    }
    sum.push_back(upper);
    sum.push_back(lower);
    return sum;
}

int main(){
    int n,x;
    cin>>n;
    vector<vector<int>> M;
    for(int i=0; i<n; i++){
        vector<int> m;
        for(int j=0; j<n; j++){
            cin>>x;
            m.push_back(x);
        }
        M.push_back(m);
        m.clear();
    }
    vector<int> sum = sumTriangles(M,n);
    for(int i=0; i<sum.size(); i++)
            cout<<sum[i]<<" ";

    return 0;
}