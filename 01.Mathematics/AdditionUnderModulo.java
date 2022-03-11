//Given two numbers a and b, find the sum of a and b. Since the sum can be very large, find the sum modulo 10^9+7
/*
    Expected Time Complexity : O(1)
    Expected Auxilliary Space :  O(1)

    Constraints:
    1 <= a,b <= 2^63-1
*/

import java.util.Scanner;

public class AdditionUnderModulo {

    long sumUnderModulo(long a, long b){
        int M = (int)(Math.pow(10, 9)+7);
        return ((a%M) + (b%M))%M;
    }  
    public static void main(String[] args) {
        AdditionUnderModulo s = new AdditionUnderModulo();
        Scanner scan = new Scanner(System.in);

        long a = scan.nextLong();
        long b = scan.nextLong();
        System.out.println(s.sumUnderModulo(a, b));
        scan.close();
    }
}
