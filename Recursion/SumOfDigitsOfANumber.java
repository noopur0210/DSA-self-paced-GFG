//You are given a number n. You need to find the sum of digits of n.
/*
    Expected Time Complexity: O(Logn).
    Expected Auxiliary Space: O(Logn) (Recursive).

    Constraints: 1 <= n <= 10^7
*/

import java.util.Scanner;

public class SumOfDigitsOfANumber {
    int sumOfDigits(int n){
        if((n%10)==n) return n;
        return (n%10)+sumOfDigits(n/10);
    }
    public static void main(String[] args) {
        SumOfDigitsOfANumber s = new SumOfDigitsOfANumber();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(s.sumOfDigits(n));
        scan.close();
    }
}
