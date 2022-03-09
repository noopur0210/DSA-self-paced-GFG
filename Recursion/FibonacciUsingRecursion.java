//You are given a number n. You need to find nth Fibonacci number.
/*
    Expected Time Complexity: O(2^n).
    Expected Auxiliary Space: O(N).

    Constraints : 1 <= n <= 20
*/
import java.util.Scanner;

public class FibonacciUsingRecursion {
    int fibonacci(int n){
        if(n==1 || n==2) return 1;
        return fibonacci(n-1) + fibonacci(n-2);
    }
    public static void main(String[] args) {
        FibonacciUsingRecursion fib = new FibonacciUsingRecursion();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(fib.fibonacci(n));

        scan.close();
    }
}
