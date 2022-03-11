//Given an integer N. Find the number of digits that appear in its factorial.
/*
    Expected Time Complexity : O(N)
    Expected Auxilliary Space : O(1)
    Constraints : 1 ≤ N ≤ 10^5
*/

import java.util.Scanner;

public class DigitsInFactorial {

    int digitsInFact(int N){
        //Number of digits in N = Math.ceil(logN) = Math.floor(logN)+1
        //log(N!) = log(N*(N-1)*(N-2)*...*2*1) = log(N)+log(N-1)+log(N-2)+...+log(2)+log(1)
        double sum = 0;
        for (int i = 1; i <=N; i++) 
            sum += Math.log10(i);
        return (int)Math.ceil(sum);
    }
    public static void main(String[] args) {
        DigitsInFactorial df = new DigitsInFactorial();
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        System.out.println(df.digitsInFact(n));

        scan.close();
    }
}
