//Given an array a[ ] of size N. The task is to find the median and mean of the array elements.
/*
    Expected Time Complexity: O(N log(N)).
    Expected Auxiliary Space: O(1).

    Constraints:
        1 <= N <= 10^6
        1 <= a[i] <= 10^6
*/

import java.util.Arrays;
import java.util.Scanner;

public class MeanAndMedianOfArray {
    int mean(int A[], int n){
        int sum=0;
        for (int i = 0; i < n; i++) 
            sum += A[i];
        int mean = sum/n;
        return mean;
    }
    int median(int A[], int n){
        Arrays.sort(A);
        if(n%2 == 0) return (A[n/2] + (A[(n/2) - 1]))/2;
        else return A[n/2];
    }
    public static void main(String[] args) {
        MeanAndMedianOfArray m = new MeanAndMedianOfArray();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int A[] = new int[n];
        for (int i = 0; i < n; i++) 
            A[i] = scan.nextInt();
        
        System.out.println(m.mean(A,n) + " " + m.median(A,n));

        scan.close();
    }
}
