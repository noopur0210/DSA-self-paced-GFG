//Given two integers ‘a’ and ‘m’. The task is to find the smallest modular multiplicative inverse of ‘a’ under modulo ‘m’.
/*
    Expected Time Complexity : O(m)
    Expected Auxilliary Space : O(1)

    Constraints:
    1 <= a <= 10^4
    1 <= m <= 10^4
*/

import java.util.Scanner;

public class ModularMultiplicativeInverse {

    int modInverse(int a, int m)
    {
        for(int i=1; i<=m; i++)
            if((i*a)%m == 1) return i;

        return -1;
    }
    public static void main(String[] args) {
        ModularMultiplicativeInverse mul = new ModularMultiplicativeInverse();
        Scanner scan = new Scanner(System.in);

        int a = scan.nextInt();
        int m = scan.nextInt();
        System.out.println(mul.modInverse(a, m));

        scan.close();
    }
}
