//You are given a number n. You need to find the digital root of n. 
//DigitalRoot of a number is the recursive sum of its digits until we get a single digit number.
/*
    Expected Time Complexity: O((Num of Digits)^2).
    Expected Auxiliary Space: O(Num of Digits).

    Constraints: 1 <= n <= 10^7
*/

import java.util.Scanner;

public class DigitalRoot {
    int digitalRoot(int n){

        if((n/10)==0) return n;
        else return digitalRoot((n%10) + digitalRoot(n/10));

    }
    public static void main(String[] args) {
        DigitalRoot droot = new DigitalRoot();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(droot.digitalRoot(n));

        scan.close();
    }
}
