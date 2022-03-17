//You are given a decimal number N. You need to find the gray code of the number N and convert it into decimal.
/*
    Expected Time Complexity: O(1).
    Expected Auxiliary Space: O(1).

    Constraints: 0 <= N <= 10^9
*/

import java.util.Scanner;

public class BinaryToGrayCodeEquivalent {
    int greyConverter(int n) {
        return n^(n>>1);
    }
    public static void main(String[] args) {
        BinaryToGrayCodeEquivalent b = new BinaryToGrayCodeEquivalent();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(b.greyConverter(n));
        scan.close();
    }
}
