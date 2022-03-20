//Given two matrices A and B having (n1 x m1) and (n2 x m2) dimensions respectively. Multiply A and B. 
/*
    Expected Time Complexity: O(N1 * M1 * M2)
    Expected Auxiliary Space: O(N1 * M2) for resultant matrix. 

    Constraints:
        1 <= n1, m1, n2, m2 <= 30
        0 <= A[i], B[i] <= 100
*/
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > multiplyMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B){
    vector<vector<int>> mul;
    if(A[0].size()!=B.size())   return mul;
    for(int i=0; i<A.size(); i++){
        vector<int> temp; 
        for(int j=0; j<B[0].size(); j++){
            int x=0;
            for(int k=0; k<A[0].size(); k++){
                x += A[i][k]*B[k][j];
            }
            temp.push_back(x);
        }
        mul.push_back(temp);
    }
    return mul;
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
    vector<vector<int>> R = multiplyMatrix(A,B);
    for(int i=0; i<R.size(); i++)
        for(int j=0; j<R[0].size(); j++)
            cout<<R[i][j]<<" ";
    return 0;
}