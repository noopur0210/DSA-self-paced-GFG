//Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.
/*
    Expected Time Complexity: O(LogN).
    Expected Auxiliary Space: O(1).

    Constraints:
        1 <= N, arr[i], x <= 10^6
*/

import java.util.Scanner;

public class LeftIndex {
    int leftIndex(int n, int arr[], int x){       
        int l = 0, r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid]>x)  r=mid-1;
            else if(arr[mid]<x) l=mid+1;
            else{
                if(mid==0 || arr[mid-1]!=arr[mid])   return mid;
                else    r = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        LeftIndex li = new LeftIndex();
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++)  arr[i] = scan.nextInt();
        int x = scan.nextInt();

        System.out.println(li.leftIndex(n, arr, x));

        scan.close();
    }
}
