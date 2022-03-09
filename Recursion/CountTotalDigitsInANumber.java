//You are given a number n. You need to find the count of digits in n.
/*
    Expected Time Complexity: O(Logn).
    Expected Auxiliary Space: O(Logn).

    Constraints: 0 <= n <= 10^7
*/

import java.util.Scanner;

public class CountTotalDigitsInANumber {
    int countDigits(int n){
        if((n%10)==n) return 1;
        return 1 + countDigits(n/10);
    }
    public static void main(String[] args) {
        CountTotalDigitsInANumber c = new CountTotalDigitsInANumber();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(c.countDigits(n));
        scan.close();
    }
}
