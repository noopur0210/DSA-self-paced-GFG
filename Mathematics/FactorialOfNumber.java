//Given a positive integer N. The task is to find factorial of N.
/*
    Expected Time Complexity : O(N)
    Expected Auxilliary Space : O(1)
*/

import java.util.Scanner;

public class FactorialOfNumber {

    //Constraints : 0<=N<=18
    long fact(int n){

        if(n==0 || n==1) return 1;
        long f=1;
        for (int i = n; i >= 2; i--) {
            f *= i;
        }
        return f;
    }
    public static void main(String[] args) {
        FactorialOfNumber f = new FactorialOfNumber();
        Scanner scan = new Scanner(System.in);
        int n;
        
        n = scan.nextInt();
        System.out.println(f.fact(n));

        scan.close();
    } 
}
