import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<ArrayList<Integer>> list = new ArrayList<>(n);
        for(int i=0;i<n;i++) {
            list.add(new ArrayList<Integer>());
        }
        for(int i=0;i<n;i++) {
            int d = sc.nextInt();
            for(int j=0;j<d;j++) {
                int x=sc.nextInt();
                list.get(i).add(x);
            }
        }
        int q = sc.nextInt();
        ArrayList<ArrayList<Integer>> queries = new ArrayList<>(q);
        for(int i=0;i<q;i++) {
            queries.add(new ArrayList<Integer>());
        }
        for(int i=0;i<q;i++) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            queries.get(i).add(x);
            queries.get(i).add(y);
        }
        sc.close();
        for(int i=0;i<q;i++) {
            int x = queries.get(i).get(0);
            int y = queries.get(i).get(1);
            if((x>=1 && x <= list.size()) && (y>=1 && y<=list.get(x-1).size())) {
                System.out.println(list.get(x-1).get(y-1));
            }else {
                System.out.println("ERROR!");
            }
        }
        
    }
}
