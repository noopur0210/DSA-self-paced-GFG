//Print numbers from 1 to N without the help of loops.
/*
    Expected Time Complexity: O(N).
    Expected Auxiliary Space: O(N) (Recursive).

    Constraints: 1 <= N <= 10^5
*/

import java.util.Scanner;

public class Print1ToNWithoutLoop {
    void printNos(int n){
        if(n==0) return;
        printNos(n-1);
        System.out.print(n + " ");
    }
    public static void main(String[] args) {
        Print1ToNWithoutLoop f = new Print1ToNWithoutLoop();
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        f.printNos(n);
        scan.close();
    }
}
