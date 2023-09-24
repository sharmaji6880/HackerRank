import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<Integer>(n);
        for(int i=0;i<n;i++) {
            int x = sc.nextInt();
            arr.add(x);
        }
        sc.close();
        ArrayList<ArrayList<Integer>> sums = new ArrayList<>(n);
        for(int i=0;i<n;i++) {
            ArrayList<Integer> list = new ArrayList<Integer>(n);
            for(int j=0;j<n;j++) {
                list.add(0);
            }
            sums.add(list);
        }
        for(int i=0;i<n;i++) {
            sums.get(i).set(i,arr.get(i));
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i>=j) {
                    continue;
                }
                int x = sums.get(i).get(j-1);
                int y = arr.get(j);
                sums.get(i).set(j,x+y);
            }
        }
        // for(int i=0;i<n;i++) {
        //     for(int j=0;j<n;j++) {
        //         System.out.print(sums.get(i).get(j)+" ");
        //     }
        //     System.out.println();
        // }
        int count=0;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(sums.get(i).get(j) < 0) {
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}
