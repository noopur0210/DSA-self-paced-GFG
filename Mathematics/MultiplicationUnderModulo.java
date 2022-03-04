//Given two numbers a and b, find the multiplication of a and b under modulo 10^9+7
/*
    Expected Time Complexity : O(1)
    Expected Auxilliary Space :  O(1)

    Constraints:
    1 <= a,b <= 2^63-1
*/

import java.util.Scanner;

public class MultiplicationUnderModulo {
    long multiplyUnderModulo(long a, long b){
        int M = (int)(Math.pow(10, 9)+7);
        return ((a%M) * (b%M))%M;
    }  
    public static void main(String[] args) {
        MultiplicationUnderModulo m = new MultiplicationUnderModulo();
        Scanner scan = new Scanner(System.in);

        long a = scan.nextLong();
        long b = scan.nextLong();
        System.out.println(m.multiplyUnderModulo(a, b));
        scan.close();
    }
}
