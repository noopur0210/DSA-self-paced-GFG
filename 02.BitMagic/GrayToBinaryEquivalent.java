//Given N in Gray Code, find its binary equivalent. Return the decimal representation of the binary equivalent.
/*
    Expected Time Complexity: O(log N)
    Expected Auxiliary Space: O(1)

    Constraints: 0 <= N <= 10^8
*/

import java.util.Scanner;

public class GrayToBinaryEquivalent {
    int grayToBinary(int n) {
        int res=n;
        while(n>0){
            n = n>>1;
            res = res^n;
        }
        return res;
    }
    public static void main(String[] args) {
        GrayToBinaryEquivalent g = new GrayToBinaryEquivalent();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(g.grayToBinary(n));
        scan.close();
    }
}
