//Given two matrices A and B having (n1 x m1) and (n2 x m2) dimensions respectively. Add A and B.
/*
    Expected Time Complexity: O(n1 * m1)
    Expected Auxiliary Space: O(n1 * m1) for the resultant matrix only. 

    Constraints:
        1 <= n1, m1, n2, m2 <= 30
        0 <= A[i], B[i] <= 100
*/
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B){
    vector<vector<int>> vect;
    if((A.size()!=B.size()) || (A[0].size()!=B[0].size())) return vect;
    for(int i = 0; i < A.size(); i++){
        vector<int> newvect;
        for(int j = 0; j < A[0].size(); j++){
            newvect.push_back(A[i][j] + B[i][j]);
        }
        vect.push_back(newvect);
        newvect.clear();
    }
    return vect;
}

int main(){
    int n1, m1, x;
    cin>>n1>>m1;
    vector<vector<int>> A;
    for(int i=0; i<n1; i++){
        vector<int> a;
        for(int j=0; j<m1; j++){
            cin>>x;
            a.push_back(x);
        }
        A.push_back(a);
        a.clear();
    }
    int n2, m2;
    cin>>n2>>m2;
    vector<vector<int>> B;
    for(int i=0; i<n2; i++){
        vector<int> b;
        for(int j=0; j<m2; j++){
            cin>>x;
            b.push_back(x);
        }
        B.push_back(b);
        b.clear();
    }
    vector<vector<int>> R = sumMatrix(A,B);
    for(int i=0; i<R.size(); i++)
        for(int j=0; j<R[0].size(); j++)
            cout<<R[i][j]<<" ";
    return 0;
}