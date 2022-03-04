//Given the first 2 terms A and B of a Geometric Series. The task is to find the Nth term of the series.
/*
    Expected Time Complexity : O(logN)
    Expected Auxilliary Space : O(1)

    Constraints:
        -100 <= A <= 100
        -100 <= B <= 100
        1 <= N <= 5
*/

import java.util.Scanner;

public class GPTerm {
    double gpTerm(int A, int B, int N){
        double r = B/A;
        double d = A*Math.pow(r, N-1);
        return d;
    }
    public static void main(String[] args) {
        GPTerm gp = new GPTerm();
        Scanner scan = new Scanner(System.in);

        int a = scan.nextInt();
        int b = scan.nextInt();
        int n = scan.nextInt();

        System.out.println((int)Math.floor(gp.gpTerm(a, b, n)));
        scan.close();
    }
}
