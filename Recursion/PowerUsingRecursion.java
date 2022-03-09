//You are given two numbers n and p. You need to find n^p.
/*
    Expected Time Complexity: O(p).
    Expected Auxiliary Space: O(p).

    Constraints:
        1 <= n <= 9
        0 <=  p <= 9
*/

import java.util.Scanner;

public class PowerUsingRecursion {
    int recursivePower(int n, int p){
        if(p==0) return 1;
        if(p==1) return n;

        return n*recursivePower(n, p-1);
    }
    public static void main(String[] args) {
        PowerUsingRecursion pow = new PowerUsingRecursion();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int p = scan.nextInt();
        System.out.println(pow.recursivePower(n, p));

        scan.close();
    }
}
