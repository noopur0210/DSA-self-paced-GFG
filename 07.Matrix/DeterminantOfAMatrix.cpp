//Given a square matrix of size N x N. The task is to find the determinant of this matrix.
/*
    Expected Time Complexity: O(N^4)
    Expected Auxiliary Space: O(N^2)

    Constraints:
        1 <= N <= 8
        -10 <= mat[i][j] <= 10
*/
#include<iostream>
#include<vector>
using namespace std;

/*
For each element of first row or first column get cofactor of those elements and then multiply the element with the determinant of the corresponding cofactor, and finally add them with alternate signs. 
As a base case the value of determinant of a 1*1 matrix is the single value itself. 
Cofactor of an element, is a matrix which we can get by removing row and column of that element from that matrix.
*/

void  get_coff( vector<vector<int>> &coff , vector<vector<int>> matrix , int n , int curr ){
//   As the matrix size is (nxn) so he size of the coffactor matrix will be (n-1 x n-1)    
    for(int i=1;i<n;i++){
        int k = 0; // k = denoting cols for the coff matrix !
        for(int j=0;j<n;j++){
            if(j == curr) continue; // if j==curr then we have to ignore that particular column !
            
            coff[i-1][k] = matrix[i][j]; // assigning the values correctly !
            k++; 
        }
    }
}

int determinantOfMatrix(vector<vector<int> > matrix, int n){
    if(n==1)
        return matrix[0][0]; // BASE CASE OP !
    
    int sign = 1; // sign variable ! 8D
    
    int sum = 0 ;// the main calculator !!! 
    
    for(int i=0;i<n;i++){
        vector<vector<int>> coff(n-1,vector<int>(n-1)); //creating a vector for cofactor matrix !
        
        get_coff(coff , matrix , n , i) ; // getting the cofactors using the function we made above !
        
        sum = sum + (sign * matrix[0][i] * determinantOfMatrix(coff,n-1)) ; // main calculaton !
        
        sign = -sign ; //changing the signs alternatively !

    }  
    return sum;
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
    cout<<determinantOfMatrix(A,n);
    return 0;
}