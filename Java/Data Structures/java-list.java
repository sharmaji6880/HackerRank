import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       ArrayList<Integer> list = new ArrayList<Integer>();
       for(int i=0;i<n;i++) {
           int x = sc.nextInt();
           list.add(x);
       }
       int q = sc.nextInt();
       for(int i=0;i<q;i++) {
           String s = sc.next();
           if(s.equals("Insert")) {
               int x = sc.nextInt();
               int y = sc.nextInt();
               list.add(x,y);
           }else if(s.equals("Delete")) {
               int x = sc.nextInt();
               list.remove(x);
           }
       }
       sc.close();
       for(int i=0;i<list.size();i++) {
           System.out.print(list.get(i)+" ");
       }
    }
}
